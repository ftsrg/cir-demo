#!/usr/bin/env python3
#
# Copyright 2025 Budapest University of Technology and Economics
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


from __future__ import annotations

import argparse
import csv
import json
import os
import re
import shutil
import subprocess
import sys
import time
from collections import Counter
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path
from typing import Iterable

ERROR_MARKERS = (
    "// No handler registered",
    "// Handler failed",
    "ERROR",
)

UNMAPPED_OP_REASON_HINTS = {
    "cir.base_class_addr": "inheritance / virtual dispatch",
    "cir.vtable.get_vptr": "inheritance / virtual dispatch",
    "cir.vtable.get_virtual_fn_addr": "inheritance / virtual dispatch",
    "cir.vtable.address_point": "inheritance / virtual dispatch",
    "cir.get_bitfield": "bitfields",
    "cir.set_bitfield": "bitfields",
}

MLIR_FEATURE_HINTS = [
    ("inheritance / virtual dispatch", ("cir.base_class_addr", "cir.vtable.", "!cir.vptr", "#cir.vtable", "#cir.typeinfo")),
    ("bitfields", ("cir.get_bitfield", "cir.set_bitfield", "#cir.bitfield_info")),
    ("anonymous union / aggregate", ('{name = ""}', 'union "anon.')),
    ("exceptions / try-catch", ("cir.resume", "landingpad", "invoke ")),
]

LOG_REASON_HINTS = [
    ("unsupported constant literal lowering", ("Constant: no literal value found for cir.const",)),
    ("C++ name leakage into emitted C", ("expected identifier or ‘(’ before ‘::’ token", "expected identifier or '(' before '::' token")),
    ("member access lowering", ("invalid type argument of '->'", "invalid type argument of ‘->’", "request for member", "is not a structure or union")),
    ("indirect call typing", ("called object", "is not a function or function pointer")),
    ("record reconstruction / incomplete definitions", ("storage size of", "isn't known", "incomplete type")),
    ("ESBMC builtins / concurrency", ("__ESBMC_", "pthread_", "atomic_begin", "atomic_end")),
]


def parse_args() -> argparse.Namespace:
    script_dir = Path(__file__).resolve().parent
    repo_root = script_dir.parent.parent
    default_esbmc_root = repo_root / "backend" / "examples" / "esbmc-eval"
    default_mapper = script_dir.parent / "build" / "xcfa-mapper"
    default_clang = repo_root / "backend" / "bin" / "bin" / "clang"
    default_cir_opt = repo_root / "backend" / "bin" / "bin" / "cir-opt"
    default_output = script_dir / "esbmc_inventory_output"

    parser = argparse.ArgumentParser(
        description="Run ESBMC benchmarks through clang + xcfa-mapper and summarize unsupported cases."
    )
    parser.add_argument("--esbmc-root", default=str(default_esbmc_root), help="Path to backend/examples/esbmc-eval")
    parser.add_argument("--set", dest="set_files", action="append", default=[], help="ESBMC .set file to scan (repeatable, relative to esbmc root or absolute). Defaults to cpp.set.")
    parser.add_argument("--glob", dest="globs", action="append", default=[], help="Additional glob for benchmark yml files, relative to esbmc root.")
    parser.add_argument("--mapper", default=str(default_mapper), help="Path to xcfa-mapper binary")
    parser.add_argument("--clang", default=str(default_clang), help="Path to CIR-enabled clang binary")
    parser.add_argument("--cir-opt", default=str(default_cir_opt), dest="cir_opt", help="Path to cir-opt binary")
    parser.add_argument("--gcc", default="gcc", help="C compiler used for generated-C syntax checks")
    parser.add_argument("--output-dir", default=str(default_output), help="Directory for artifacts and reports")
    parser.add_argument("--limit", type=int, default=0, help="Max number of benchmarks to process")
    parser.add_argument("--jobs", type=int, default=max(1, min(8, (os.cpu_count() or 2) // 2 or 1)), help="Parallel worker count")
    parser.add_argument("--timeout", type=int, default=120, help="Per-command timeout in seconds")
    parser.add_argument("--best-effort", action="store_true", help="Run xcfa-mapper with --best-effort")
    parser.add_argument("--keep-success-artifacts", action="store_true", help="Keep MLIR/C/log files for successful benchmarks too")
    return parser.parse_args()


def read_text(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="replace")


def first_meaningful_line(text: str) -> str:
    for raw_line in text.splitlines():
        line = raw_line.strip()
        if not line:
            continue
        if line.startswith("==="):
            continue
        return line
    return ""


def parse_input_file_from_yml(yml_path: Path) -> str:
    for raw_line in read_text(yml_path).splitlines():
        stripped = raw_line.strip()
        if not stripped.startswith("input_files:"):
            continue
        _, value = stripped.split(":", 1)
        value = value.strip().strip('"\'')
        if value:
            return value
    raise ValueError(f"Could not find input_files in {yml_path}")


def expand_set_file(esbmc_root: Path, set_path: Path) -> list[Path]:
    yml_paths: list[Path] = []
    for raw_line in read_text(set_path).splitlines():
        stripped = raw_line.strip()
        if not stripped or stripped.startswith("#"):
            continue
        yml_paths.extend(sorted(esbmc_root.glob(stripped)))
    return yml_paths


def gather_yml_paths(esbmc_root: Path, set_files: list[str], globs: list[str]) -> list[Path]:
    resolved_paths: list[Path] = []
    requested_sets = set_files or ["cpp.set"]
    for set_name in requested_sets:
        set_path = Path(set_name)
        if not set_path.is_absolute():
            set_path = esbmc_root / set_name
        resolved_paths.extend(expand_set_file(esbmc_root, set_path))
    for pattern in globs:
        resolved_paths.extend(sorted(esbmc_root.glob(pattern)))

    deduped: list[Path] = []
    seen: set[Path] = set()
    for path in resolved_paths:
        resolved = path.resolve()
        if resolved in seen:
            continue
        seen.add(resolved)
        deduped.append(path)
    return deduped


def sanitize_case_id(case_id: str) -> str:
    return re.sub(r"[^A-Za-z0-9_.-]+", "__", case_id)


def shorten_list(values: Iterable[str], limit: int = 4) -> str:
    unique_values = []
    seen = set()
    for value in values:
        if value in seen:
            continue
        seen.add(value)
        unique_values.append(value)
    if len(unique_values) <= limit:
        return ", ".join(unique_values)
    visible = ", ".join(unique_values[:limit])
    return f"{visible}, +{len(unique_values) - limit} more"


def extract_unmapped_ops(trace_path: Path) -> list[str]:
    if not trace_path.exists():
        return []
    try:
        trace_data = json.loads(read_text(trace_path))
    except json.JSONDecodeError:
        return []
    operation_trace = trace_data.get("operationTrace", [])
    return sorted({entry.get("opName", "") for entry in operation_trace if not entry.get("mapped", True) and entry.get("opName")})


def infer_feature_tags(source_text: str, mlir_text: str, logs: dict[str, str], unmapped_ops: list[str]) -> list[str]:
    tags: list[str] = []
    mlir_lower = mlir_text.lower()
    combined_logs = "\n".join(logs.values())
    logs_lower = combined_logs.lower()
    source_lower = source_text.lower()

    for op_name in unmapped_ops:
        if op_name in UNMAPPED_OP_REASON_HINTS:
            tags.append(UNMAPPED_OP_REASON_HINTS[op_name])

    for label, patterns in MLIR_FEATURE_HINTS:
        if any(pattern.lower() in mlir_lower for pattern in patterns):
            tags.append(label)

    for label, patterns in LOG_REASON_HINTS:
        if any(pattern.lower() in logs_lower for pattern in patterns):
            tags.append(label)

    if "__esbmc_" in source_lower:
        tags.append("ESBMC builtins / concurrency")

    deduped: list[str] = []
    seen = set()
    for tag in tags:
        if tag in seen:
            continue
        seen.add(tag)
        deduped.append(tag)
    return deduped


def infer_reason(stage: str, logs: dict[str, str], source_text: str, mlir_text: str, unmapped_ops: list[str]) -> str:
    if unmapped_ops:
        return f"unmapped ops: {shorten_list(unmapped_ops)}"

    for key in ["compile_log", "mapper_log", "clang_log"]:
        log_text = logs.get(key, "")
        for label, patterns in LOG_REASON_HINTS:
            if any(pattern.lower() in log_text.lower() for pattern in patterns):
                return label

    feature_tags = infer_feature_tags(source_text, mlir_text, logs, unmapped_ops)
    if feature_tags:
        return shorten_list(feature_tags, limit=3)

    stage_priority = {
        "clang_failed": ["clang_log"],
        "flatten_failed": ["flatten_log"],
        "mapper_failed": ["mapper_log"],
        "mapper_partial": ["mapper_log", "compile_log"],
        "compile_failed": ["compile_log", "mapper_log"],
    }
    for key in stage_priority.get(stage, ["clang_log", "mapper_log", "compile_log"]):
        message = first_meaningful_line(logs.get(key, ""))
        if message:
            return message
    return "unknown"


def run_command(command: list[str], timeout: int, cwd: Path | None = None) -> subprocess.CompletedProcess[str]:
    return subprocess.run(
        command,
        cwd=str(cwd) if cwd else None,
        text=True,
        capture_output=True,
        timeout=timeout,
        check=False,
    )


def benchmark_case(case_index: int, yml_path: Path, esbmc_root: Path, args: argparse.Namespace, output_dir: Path) -> dict[str, object]:
    relative_yml = yml_path.relative_to(esbmc_root)
    source_name = parse_input_file_from_yml(yml_path)
    source_path = yml_path.parent / source_name
    case_id = str(relative_yml.with_suffix(""))
    artifact_dir = output_dir / "artifacts" / sanitize_case_id(case_id)
    artifact_dir.mkdir(parents=True, exist_ok=True)

    mlir_path = artifact_dir / "input.mlir"
    flat_mlir_path = artifact_dir / "input.flat.mlir"
    c_path = artifact_dir / "output.c"
    trace_path = artifact_dir / "trace.json"
    compile_sentinel = artifact_dir / "compile.o"

    source_text = read_text(source_path)
    logs = {
        "clang_log": "",
        "flatten_log": "",
        "mapper_log": "",
        "compile_log": "",
    }
    unmapped_ops: list[str] = []
    mlir_text = ""
    start_time = time.time()
    status = "success"

    clang_command = [
        args.clang,
        "-x",
        "c++",
        "-std=c++17",
        "-Xclang",
        "-emit-cir",
        "-S",
        str(source_path),
        "-o",
        str(mlir_path),
    ]

    try:
        clang_result = run_command(clang_command, args.timeout)
    except subprocess.TimeoutExpired:
        logs["clang_log"] = f"Timed out after {args.timeout}s"
        status = "clang_failed"
    else:
        logs["clang_log"] = (clang_result.stdout or "") + (clang_result.stderr or "")
        if clang_result.returncode != 0 or not mlir_path.exists():
            status = "clang_failed"

    if status == "success":
        mlir_text = read_text(mlir_path)
        flatten_command = [args.cir_opt, str(mlir_path), "-cir-flatten-cfg", "-o", str(flat_mlir_path)]
        try:
            flatten_result = run_command(flatten_command, args.timeout)
        except subprocess.TimeoutExpired:
            logs["flatten_log"] = f"Timed out after {args.timeout}s"
            status = "flatten_failed"
        else:
            logs["flatten_log"] = (flatten_result.stdout or "") + (flatten_result.stderr or "")
            if flatten_result.returncode != 0 or not flat_mlir_path.exists():
                status = "flatten_failed"

    if status == "success":
        mapper_command = [args.mapper]
        if args.best_effort:
            mapper_command.append("--best-effort")
        mapper_command.extend(["--monitor-json", str(trace_path), str(flat_mlir_path), str(c_path)])
        try:
            mapper_result = run_command(mapper_command, args.timeout)
        except subprocess.TimeoutExpired:
            logs["mapper_log"] = f"Timed out after {args.timeout}s"
            status = "mapper_failed"
        else:
            logs["mapper_log"] = (mapper_result.stdout or "") + (mapper_result.stderr or "")
            if mapper_result.returncode != 0 or not c_path.exists():
                status = "mapper_failed"
            else:
                unmapped_ops = extract_unmapped_ops(trace_path)
                generated_c = read_text(c_path)
                has_error_markers = any(marker in generated_c for marker in ERROR_MARKERS)
                if has_error_markers or unmapped_ops:
                    status = "mapper_partial"

    if status in {"success", "mapper_partial"}:
        compile_command = [args.gcc, "-c", "-fsyntax-only", str(c_path), "-o", str(compile_sentinel)]
        try:
            compile_result = run_command(compile_command, args.timeout)
        except subprocess.TimeoutExpired:
            logs["compile_log"] = f"Timed out after {args.timeout}s"
            status = "compile_failed"
        else:
            logs["compile_log"] = (compile_result.stdout or "") + (compile_result.stderr or "")
            if compile_result.returncode != 0:
                status = "compile_failed"

    duration_seconds = round(time.time() - start_time, 2)
    reason = infer_reason(status, logs, source_text, mlir_text, unmapped_ops)
    feature_tags = infer_feature_tags(source_text, mlir_text, logs, unmapped_ops)

    if not args.keep_success_artifacts and status == "success":
        shutil.rmtree(artifact_dir, ignore_errors=True)

    return {
        "index": case_index,
        "case_id": case_id,
        "source": str(source_path.relative_to(esbmc_root)),
        "yml": str(relative_yml),
        "status": status,
        "reason": reason,
        "feature_tags": feature_tags,
        "unmapped_ops": unmapped_ops,
        "duration_seconds": duration_seconds,
        "artifacts": str(artifact_dir.relative_to(output_dir)) if artifact_dir.exists() else "",
        "logs": logs,
    }


def write_json_report(results: list[dict[str, object]], output_dir: Path) -> Path:
    report_path = output_dir / "report.json"
    summary = Counter(result["status"] for result in results)
    payload = {
        "summary": dict(summary),
        "results": results,
    }
    report_path.write_text(json.dumps(payload, indent=2), encoding="utf-8")
    return report_path


def write_csv_report(results: list[dict[str, object]], output_dir: Path) -> Path:
    report_path = output_dir / "report.csv"
    with report_path.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(
            handle,
            fieldnames=["case_id", "source", "status", "reason", "feature_tags", "unmapped_ops", "duration_seconds", "artifacts"],
        )
        writer.writeheader()
        for result in results:
            writer.writerow(
                {
                    "case_id": result["case_id"],
                    "source": result["source"],
                    "status": result["status"],
                    "reason": result["reason"],
                    "feature_tags": "; ".join(result["feature_tags"]),
                    "unmapped_ops": "; ".join(result["unmapped_ops"]),
                    "duration_seconds": result["duration_seconds"],
                    "artifacts": result["artifacts"],
                }
            )
    return report_path


def write_markdown_report(results: list[dict[str, object]], output_dir: Path, args: argparse.Namespace) -> Path:
    report_path = output_dir / "report.md"
    counts = Counter(result["status"] for result in results)
    unsupported = [result for result in results if result["status"] != "success"]
    top_reasons = Counter(result["reason"] for result in unsupported)

    lines = [
        "# ESBMC benchmark inventory",
        "",
        f"- Benchmarks processed: {len(results)}",
        f"- Sets: {', '.join(args.set_files or ['cpp.set'])}",
        f"- Status counts: {', '.join(f'{status}={counts[status]}' for status in sorted(counts))}",
        "",
    ]

    if top_reasons:
        lines.append("## Top unsupported reasons")
        lines.append("")
        for reason, count in top_reasons.most_common(12):
            lines.append(f"- {count} × {reason}")
        lines.append("")

    lines.append("## Unsupported or partial benchmarks")
    lines.append("")
    if not unsupported:
        lines.append("All scanned benchmarks completed successfully.")
    else:
        for result in unsupported:
            feature_suffix = ""
            if result["feature_tags"]:
                feature_suffix = f" | tags: {', '.join(result['feature_tags'])}"
            lines.append(
                f"- `{result['case_id']}` — `{result['status']}` — {result['reason']}{feature_suffix}"
            )
    lines.append("")

    report_path.write_text("\n".join(lines), encoding="utf-8")
    return report_path


def validate_tools(args: argparse.Namespace) -> None:
    mapper_path = Path(args.mapper)
    clang_path = Path(args.clang)
    cir_opt_path = Path(args.cir_opt)
    if not mapper_path.exists():
        raise SystemExit(f"xcfa-mapper not found: {mapper_path}")
    if not clang_path.exists():
        raise SystemExit(f"clang not found: {clang_path}")
    if not cir_opt_path.exists():
        raise SystemExit(f"cir-opt not found: {cir_opt_path}")


def main() -> int:
    args = parse_args()
    esbmc_root = Path(args.esbmc_root).resolve()
    output_dir = Path(args.output_dir).resolve()
    output_dir.mkdir(parents=True, exist_ok=True)

    validate_tools(args)
    yml_paths = gather_yml_paths(esbmc_root, args.set_files, args.globs)
    if args.limit > 0:
        yml_paths = yml_paths[: args.limit]

    if not yml_paths:
        raise SystemExit("No ESBMC benchmark yml files matched the requested inputs.")

    results: list[dict[str, object]] = []
    with ThreadPoolExecutor(max_workers=args.jobs) as executor:
        future_map = {
            executor.submit(benchmark_case, index, yml_path, esbmc_root, args, output_dir): yml_path
            for index, yml_path in enumerate(yml_paths, start=1)
        }
        for future in as_completed(future_map):
            results.append(future.result())

    results.sort(key=lambda item: item["index"])

    json_report = write_json_report(results, output_dir)
    csv_report = write_csv_report(results, output_dir)
    markdown_report = write_markdown_report(results, output_dir, args)

    counts = Counter(result["status"] for result in results)
    print(f"Processed {len(results)} benchmarks")
    for status in sorted(counts):
        print(f"  {status}: {counts[status]}")
    print(f"Markdown report: {markdown_report}")
    print(f"CSV report:      {csv_report}")
    print(f"JSON report:     {json_report}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
