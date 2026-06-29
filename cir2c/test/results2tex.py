#!/usr/bin/env python3
"""Convert a raw test-suite summary (results.txt) into LaTeX number macros.

Usage:
    results2tex.py RAW.txt PREFIX OUT.tex

Each recognised count in RAW.txt becomes a \\newcommand named
\\<PREFIX><Suffix>; with PREFIX=llvm the "Passed (full)" count is emitted as
\\llvmPassed, the "other CIR-gen error" skip reason as \\llvmSkipCirGenError,
and so on.  A few derived values (attempted count and pass shares) are
appended.

The script validates that the sub-totals add up (skip reasons -> Skipped,
failure reasons -> Failed, and the top-level buckets -> Total) and aborts
otherwise, so that a malformed or updated results file is caught early rather
than silently producing wrong numbers in the paper.
"""
import re
import sys

# Exact text before the first ':' on a line  ->  macro suffix.
LABELS = {
    "Total tests":         "Total",
    "Passed (full)":       "Passed",
    "Compiled, not run":   "CompiledNotRun",
    "Skipped":             "Skipped",
    "blocklisted op":      "SkipBlocklisted",
    "arch SIMD intrinsic": "SkipSimd",
    "unsupported target":  "SkipUnsupportedTarget",
    "GNU/MSVC extension":  "SkipGnuMsvc",
    "missing header":      "SkipMissingHeader",
    "unknown type name":   "SkipUnknownType",
    "CIR not implemented": "SkipCirNyi",
    "other CIR-gen error": "SkipCirGenError",
    "upstream ClangIR":    "SkipUpstream",
    "Timed out":           "TimedOut",
    "Failed":              "Failed",
    "mapper failed":       "FailMapper",
    "compile failed":      "FailCompile",
    "output mismatch":     "FailMismatch",
}

# Emission order (keeps the generated .tex stable and readable).
ORDER = [
    "Total", "Passed", "CompiledNotRun", "Skipped",
    "SkipBlocklisted", "SkipSimd", "SkipUnsupportedTarget", "SkipGnuMsvc",
    "SkipMissingHeader", "SkipUnknownType", "SkipCirNyi", "SkipCirGenError",
    "SkipUpstream", "TimedOut", "Failed",
    "FailMapper", "FailCompile", "FailMismatch",
]

SKIP_PARTS = ["SkipBlocklisted", "SkipSimd", "SkipUnsupportedTarget",
              "SkipGnuMsvc", "SkipMissingHeader", "SkipUnknownType",
              "SkipCirNyi", "SkipCirGenError", "SkipUpstream"]
FAIL_PARTS = ["FailMapper", "FailCompile", "FailMismatch"]
TOP_PARTS = ["Passed", "CompiledNotRun", "Skipped", "TimedOut", "Failed"]


def parse(text):
    """Return {suffix: int} for every recognised label (first occurrence wins,
    so the human-readable section is preferred over the trailing JSON dump)."""
    vals = {}
    for line in text.splitlines():
        if ":" not in line:
            continue
        label, rest = line.split(":", 1)
        suffix = LABELS.get(label.strip())
        if suffix is None or suffix in vals:
            continue
        m = re.search(r"-?\d+", rest)
        if m is not None:
            vals[suffix] = int(m.group())
    return vals


def main():
    if len(sys.argv) != 4:
        sys.exit(__doc__)
    raw_path, prefix, out_path = sys.argv[1:]

    with open(raw_path, encoding="utf-8") as f:
        vals = parse(f.read())

    missing = [s for s in ORDER if s not in vals]
    if missing:
        sys.exit(f"error: {raw_path}: could not find counts for {missing}")

    errors = []

    def check(name, parts, total):
        got = sum(vals[p] for p in parts)
        if got != vals[total]:
            errors.append(f"{name}: parts sum to {got}, "
                          f"but {total} is {vals[total]}")

    check("skip reasons", SKIP_PARTS, "Skipped")
    check("failure reasons", FAIL_PARTS, "Failed")
    check("top-level buckets", TOP_PARTS, "Total")
    if errors:
        sys.exit(f"error: {raw_path}: inconsistent counts:\n  "
                 + "\n  ".join(errors))

    attempted = vals["Total"] - vals["Skipped"]
    # Everything that compiled, regardless of whether it later ran or matched
    # its reference output: the output check is what separates these three
    # buckets, so folding them back together is a pure compile-completeness
    # count (for the ESBMC suite the latter two are 0, so Compiles == Passed).
    compiles = vals["Passed"] + vals["CompiledNotRun"] + vals["FailMismatch"]
    derived = {
        "Attempted": str(attempted),
        "Compiles": str(compiles),
        "PassShare": f"{100 * vals['Passed'] / vals['Total']:.1f}",
        "PassShareAttempted":
            f"{100 * vals['Passed'] / attempted:.1f}" if attempted else "0.0",
        "CompileShare": f"{100 * compiles / vals['Total']:.1f}",
        "CompileShareAttempted":
            f"{100 * compiles / attempted:.1f}" if attempted else "0.0",
    }

    out = [f"% Auto-generated from {raw_path} by results2tex.py -- do not edit.",
           f"% Regenerate: python3 results2tex.py {raw_path} {prefix} {out_path}",
           "% Count macros end in \\xspace so a following word is spaced correctly;",
           "% the *PassShare macros do not (they are always used before \\,\\%)."]
    # Integer counts get a trailing \xspace so "\macro word" keeps its space.
    out += [f"\\newcommand{{\\{prefix}{s}}}{{{vals[s]}\\xspace}}" for s in ORDER]
    out += [f"\\newcommand{{\\{prefix}{s}}}{{{derived[s]}\\xspace}}"
            for s in ("Attempted", "Compiles")]
    out += [f"\\newcommand{{\\{prefix}{s}}}{{{derived[s]}}}"
            for s in ("PassShare", "PassShareAttempted",
                      "CompileShare", "CompileShareAttempted")]

    with open(out_path, "w", encoding="utf-8") as f:
        f.write("\n".join(out) + "\n")
    print(f"wrote {out_path}: {len(ORDER) + 6} macros, prefix \\{prefix}")


if __name__ == "__main__":
    main()
