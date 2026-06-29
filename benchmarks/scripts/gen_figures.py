#!/usr/bin/env python3
"""Minimal figure generator extracted from analysis.ipynb.

Produces exactly four PDFs (no LaTeX, no manifest):
  fig5a.pdf  dual-majority heatmap, C++ vs C only, suite c-nohavoc_std
  fig5b.pdf  dual-majority heatmap, C++ vs C only, suite c-havoc_std
  fig6a.pdf  shared-task quantile (cactus) plot, c-nohavoc_std vs cpp-baseline
  fig6b.pdf  shared-task quantile (cactus) plot, c-havoc_std  vs cpp-baseline

Run from anywhere:  python3 gen_figures.py [--results DIR] [--out DIR]
Defaults match the notebook: reads <benchmarks>/results/results/normalized and
writes the PDFs into <benchmarks>/analysis/figures.
"""
from __future__ import annotations

import argparse
import bz2
import re
import sys
import xml.etree.ElementTree as ET
from pathlib import Path

import matplotlib
matplotlib.use("Agg")  # headless PDF output
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

SCRIPT_DIR = Path(__file__).resolve().parent
BENCHMARKS_DIR = SCRIPT_DIR.parent
DEFAULT_RESULTS_DIR = BENCHMARKS_DIR / "results" / "results" / "normalized"
DEFAULT_OUT_DIR = BENCHMARKS_DIR / "results" / "figures"

# ── Configuration (mirrors the notebook's first cell) ────────────────────────
NATIVE_CPP_TOOLS = ["esbmc-kind", "cbmc", "divine"]  # also ran the original C++ suite
CPP_EXCLUDE = ["cbmc"]            # dropped from the C++ suite only (skews its consensus)
TOOL_BLOCKLIST: list[str] = []   # dropped from every suite
MIN_MAJORITY_VOTES_C = 2         # mapped-C majority threshold
MIN_MAJORITY_VOTES_CPP = 1       # original C++ majority threshold

MAJ_ORDER = ["true", "false", "tie", "unknown"]

FNAME_RE = re.compile(
    r"^(?P<tool>.+?)\.(?P<date>\d{4}-\d{2}-\d{2}_\d{2}-\d{2}-\d{2})\.results\.(?P<config>[^.]+)\."
)


# ── Parsing helpers ──────────────────────────────────────────────────────────
def _seconds(v):
    if not v:
        return np.nan
    try:
        return float(v.strip().rstrip("s"))
    except ValueError:
        return np.nan


def _verdict(status):
    s = (status or "").lower()
    if s.startswith("true"):
        return "true"
    if s.startswith("false"):
        return "false"
    return "unknown"


def parse_file(path: Path) -> list[dict]:
    m = FNAME_RE.match(path.name)
    tool, config = m["tool"], m["config"]
    root = ET.fromstring(bz2.open(path).read())
    out = []
    for run in root.findall("run"):
        cols = {c.get("title"): c.get("value") for c in run.findall("column")}
        name = run.get("name")
        out.append(
            {
                "tool": tool,
                "config": config,
                "task": name,
                "expected": run.get("expectedVerdict"),
                "verdict": _verdict(cols.get("status")),
                "bx_category": cols.get("category"),
                "cputime": _seconds(cols.get("cputime")),
            }
        )
    return out


def load_df(results_dir: Path) -> tuple[pd.DataFrame, list[str], list[str]]:
    """Replicate the notebook's load + cleanup; return (df, ORIGINAL, MAPPED) configs."""
    if not results_dir.is_dir():
        sys.exit(f"results directory not found: {results_dir}")

    # Keep only the latest timestamped run per (tool, config).
    latest = {}
    for f in sorted(results_dir.glob("*.xml.bz2")):
        m = FNAME_RE.match(f.name)
        if m:
            latest[(m["tool"], m["config"])] = f
    df = pd.DataFrame([row for f in latest.values() for row in parse_file(f)])

    # Discover suites: a "mapped" suite is run by more verifiers than the native-C++ trio.
    tools_per_config = df.groupby("config").tool.nunique()
    mapped = sorted(tools_per_config.index[tools_per_config > len(NATIVE_CPP_TOOLS)])
    original = sorted(c for c in tools_per_config.index if c not in mapped)
    df["config"] = pd.Categorical(df["config"], original + mapped, ordered=True)

    # Drop unknown-only verifiers, blocklisted tools, and CPP_EXCLUDE from C++ suites.
    conclusive = df.loc[df.verdict.isin(["true", "false"]), "tool"].unique()
    df = df[df.tool.isin(conclusive)]
    df = df[~df.tool.isin(TOOL_BLOCKLIST)]
    df = df[~(df.tool.isin(CPP_EXCLUDE) & df.config.isin(original))]
    return df.copy(), original, mapped


# ── Majority machinery (notebook cells 15 & 27) ──────────────────────────────
def per_task_counts(df: pd.DataFrame, cfg: str) -> pd.DataFrame:
    return (
        df[df.config == cfg]
        .pivot_table(index=["task", "expected"], columns="verdict",
                     values="tool", aggfunc="count", fill_value=0)
        .reindex(columns=["true", "false", "unknown"], fill_value=0)
        .reset_index()
        .rename(columns={"expected": "label"})
    )


def collapse(pt: pd.DataFrame, min_votes: int) -> pd.DataFrame:
    pt = pt.copy()
    winner_votes = np.maximum(pt.true, pt.false)
    enough = winner_votes >= min_votes
    pt["majority"] = np.select(
        [~enough, pt.true > pt.false, pt.false > pt.true],
        ["unknown", "true", "false"],
        default="tie",
    )
    return pt


def dual_crosstab(df: pd.DataFrame, c_cfg: str, cpp_cfg: str) -> tuple[pd.DataFrame, int]:
    """C++ majority (rows) vs mapped-C majority (cols) over shared tasks."""
    def maj(cfg, col, min_votes):
        return (collapse(per_task_counts(df, cfg), min_votes)[["task", "label", "majority"]]
                .rename(columns={"majority": col}))

    dm = maj(cpp_cfg, "cpp_majority", MIN_MAJORITY_VOTES_CPP).merge(
        maj(c_cfg, "c_majority", MIN_MAJORITY_VOTES_C), on=["task", "label"])
    ct = (pd.crosstab(dm.cpp_majority, dm.c_majority)
          .reindex(index=MAJ_ORDER, columns=MAJ_ORDER, fill_value=0))
    return ct, len(dm)


def heatmap(ct: pd.DataFrame, c_cfg: str, cpp_cfg: str, n: int):
    fig, ax = plt.subplots(figsize=(6, 5))
    im = ax.imshow(ct.values, cmap="Blues")
    ax.set_xticks(range(len(MAJ_ORDER)), MAJ_ORDER)
    ax.set_yticks(range(len(ct.index)), ct.index)
    ax.set_xlabel(f"C majority ({c_cfg})")
    ax.set_ylabel(f"C++ majority ({cpp_cfg})")
    ax.set_title(f"C++ vs. C majority — {n} shared tasks")
    hi = ct.values.max() if ct.values.size else 0
    for i in range(len(ct.index)):
        for j in range(len(MAJ_ORDER)):
            v = ct.values[i, j]
            ax.text(j, i, int(v), ha="center", va="center",
                    color="white" if hi and v > hi / 2 else "black")
    fig.colorbar(im, ax=ax, shrink=0.8)
    fig.tight_layout()
    return fig


# ── Shared-task quantile (cactus) plot (notebook cells 35 & 37) ──────────────
def solved_times(d: pd.DataFrame) -> np.ndarray:
    return d.loc[d.bx_category == "correct", "cputime"].dropna().sort_values().to_numpy()


def shared_quantile(df: pd.DataFrame, c_cfg: str, cpp_cfg: str):
    """Cactus plot over tasks shared by cpp_cfg and c_cfg; native-C++ tools doubled."""
    shared = set(df.loc[df.config == cpp_cfg, "task"]) & set(df.loc[df.config == c_cfg, "task"])
    series = {}
    csub = df[(df.config == c_cfg) & (df.task.isin(shared))]
    for t in sorted(csub.tool.unique()):
        series[t] = solved_times(csub[csub.tool == t])             # mapped-C run (solid)
    psub = df[(df.config == cpp_cfg) & (df.task.isin(shared))]
    for t in sorted(psub.tool.unique()):
        series[f"{t} (C++)"] = solved_times(psub[psub.tool == t])  # C++ run (dashed)
    series = {k: v for k, v in series.items() if len(v)}

    bases = list(dict.fromkeys(lbl.replace(" (C++)", "") for lbl in series))
    cmap = plt.get_cmap("tab20")
    color = {b: cmap(i % 20) for i, b in enumerate(bases)}

    fig, ax = plt.subplots(figsize=(10, 6))
    for lbl, arr in series.items():
        ax.plot(range(1, len(arr) + 1), arr, label=lbl,
                color=color[lbl.replace(" (C++)", "")], lw=1.3,
                ls="--" if lbl.endswith("(C++)") else "-")
    ax.set_yscale("log")
    ax.set_xlabel("# correctly solved tasks")
    ax.set_ylabel("CPU time (s)")
    ax.set_title(f"Quantile plot — shared {cpp_cfg} ∩ {c_cfg}  ({len(shared)} tasks)")
    ax.grid(True, which="both", alpha=0.3)
    ax.legend(fontsize=12, ncol=1, loc="upper left", bbox_to_anchor=(1.01, 1.0))
    fig.tight_layout()
    return fig


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--results", type=Path, default=DEFAULT_RESULTS_DIR,
                    help="normalized BenchExec results dir (default: %(default)s)")
    ap.add_argument("--out", type=Path, default=DEFAULT_OUT_DIR,
                    help="output dir for the PDFs (default: %(default)s)")
    args = ap.parse_args()

    df, original, mapped = load_df(args.results)
    cpp_ref = original[0]  # "cpp-baseline"
    for cfg in ("c-nohavoc_std", "c-havoc_std"):
        if cfg not in mapped:
            sys.exit(f"suite {cfg!r} not found in results (have: {mapped})")

    def dual_heatmap(c_cfg):
        ct, n = dual_crosstab(df, c_cfg, cpp_ref)
        return heatmap(ct, c_cfg, cpp_ref, n)

    args.out.mkdir(parents=True, exist_ok=True)
    targets = [
        ("fig5a.pdf", lambda: dual_heatmap("c-nohavoc_std")),
        ("fig5b.pdf", lambda: dual_heatmap("c-havoc_std")),
        ("fig6a.pdf", lambda: shared_quantile(df, "c-nohavoc_std", cpp_ref)),
        ("fig6b.pdf", lambda: shared_quantile(df, "c-havoc_std", cpp_ref)),
    ]
    for fname, build in targets:
        fig = build()
        fig.savefig(args.out / fname, bbox_inches="tight")
        plt.close(fig)
        print(f"wrote {args.out / fname}")


if __name__ == "__main__":
    main()
