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

"""
Shared fm-tools accessors.

fm-tools (benchmarks/tools/fm-tools) is the SV-COMP tool database: one
data/<id>.yml per tool, listing its versions (each with a Zenodo DOI), its
BenchExec tool-info module, the competition-faithful command-line options, and
which competitions/tracks it participated in.

This module is the single source of truth for "which tools are C.ReachSafety
verifiers" and "where do I download tool <id>". Both gen-xml.py (benchmark
definitions) and fmtools-url.py (download URLs) build on it, so the tool set is
auto-derived rather than enumerated by hand.

Selection policy: the tool set is exactly the participant list of the
C.ReachSafety category in SV-COMP's category-structure.yml (vendored alongside
this file). For each such tool we take its BenchExec module/options and download
archive from the version it entered TARGET_COMPETITION's Verification track with.

The category file and TARGET_COMPETITION can be different editions: membership
follows the (latest) category-structure, while versions follow the last edition
that actually shipped archives for every ReachSafety tool.

Refresh the category file with:
    curl -L https://gitlab.com/sosy-lab/sv-comp/bench-defs/-/raw/main/\
benchmark-defs/category-structure.yml -o category-structure.yml
"""

from __future__ import annotations

import json
import subprocess
import sys
import urllib.request
from pathlib import Path

import yaml

# The SV-COMP edition whose tool versions/options/archives we mirror. Bump this
# (and re-run gen-xml.py) to move to a newer competition. Note: not every tool
# has an archive for every edition (e.g. divine has no SV-COMP 2027 entry), so
# this can lag the category file.
TARGET_COMPETITION = "SV-COMP 2026"
TARGET_TRACK = "Verification"

BENCHMARKS_DIR = Path(__file__).resolve().parent
# fm-tools is gitignored (not checked in), so it is absent on a fresh checkout
# and cloned on demand by ensure_fm_tools().
FM_TOOLS_DIR = BENCHMARKS_DIR / "tools" / "fm-tools"
FM_TOOLS_URL = "https://gitlab.com/sosy-lab/benchmarking/fm-tools.git"
DATA_DIR = FM_TOOLS_DIR / "data"
# Vendored SV-COMP category structure; its C.ReachSafety.verifiers list defines
# the tool set. See module docstring for the refresh command.
CATEGORY_STRUCTURE = BENCHMARKS_DIR / "category-structure.yml"
REACHSAFETY_CATEGORY = "C.ReachSafety"


def normalize_module(module: str | None) -> str | None:
    """Reduce a benexec_toolinfo_module to the bare BenchExec tool name.

    fm-tools states the module inconsistently: 'benchexec.tools.esbmc',
    'cpachecker', 'divine4.py', or even a full gitlab raw URL to the .py file.
    BenchExec's `tool=` attribute wants the bare name (e.g. 'esbmc', 'divine4').
    """
    if not module:
        return None
    module = module.strip()
    if module.startswith("http"):
        module = module.rsplit("/", 1)[-1]
    if module.startswith("benchexec.tools."):
        module = module[len("benchexec.tools."):]
    if module.endswith(".py"):
        module = module[:-len(".py")]
    return module


def ensure_fm_tools() -> None:
    """Clone fm-tools on first use; it is gitignored so absent on a fresh checkout.

    A shallow clone of the default branch is enough — we only read data/*.yml.
    """
    if DATA_DIR.is_dir():
        return
    if FM_TOOLS_DIR.exists():
        raise RuntimeError(
            f"{FM_TOOLS_DIR} exists but has no data/; remove it and retry "
            f"(expected a clone of {FM_TOOLS_URL}).")
    FM_TOOLS_DIR.parent.mkdir(parents=True, exist_ok=True)
    print(f"fm-tools not present; cloning {FM_TOOLS_URL} -> {FM_TOOLS_DIR}", file=sys.stderr)
    subprocess.run(
        ["git", "clone", "--depth", "1", FM_TOOLS_URL, str(FM_TOOLS_DIR)],
        check=True,
    )


def load(tool_id: str) -> dict:
    ensure_fm_tools()
    path = DATA_DIR / f"{tool_id}.yml"
    with open(path, encoding="utf-8") as f:
        return yaml.safe_load(f)


def _selected_version_name(data: dict) -> str | None:
    """The version this tool entered TARGET_COMPETITION's Verification track with."""
    for p in data.get("competition_participations") or []:
        if p.get("competition") == TARGET_COMPETITION and p.get("track") == TARGET_TRACK:
            return p.get("tool_version")
    return None


def _version_record(data: dict, version: str) -> dict:
    for v in data.get("versions") or []:
        if v.get("version") == version:
            return v
    raise KeyError(f"version {version!r} not found in {data.get('id')!r}")


def tool_info(tool_id: str) -> dict | None:
    """Return {id, module, version, options, doi, url, languages} for a tool, or
    None if it is not a TARGET_COMPETITION Verification-track C verifier."""
    data = load(tool_id)
    if not isinstance(data, dict):
        return None
    version = _selected_version_name(data)
    if not version:
        return None
    if "C" not in (data.get("input_languages") or []):
        return None
    vr = _version_record(data, version)
    return {
        "id": data["id"],
        "module": normalize_module(data.get("benchexec_toolinfo_module")),
        "version": version,
        "options": list(vr.get("benchexec_toolinfo_options") or []),
        "doi": vr.get("doi"),
        "url": vr.get("url"),
        "languages": list(data.get("input_languages") or []),
    }


def reachsafety_ids() -> list[str]:
    """Sorted ids of the SV-COMP C.ReachSafety participants.

    Taken from category-structure.yml's C.ReachSafety.verifiers list, dropping any
    tool that opts out of the whole category. (Sub-category opt_out/opt_in entries
    don't change top-level membership and are ignored.)
    """
    data = yaml.safe_load(CATEGORY_STRUCTURE.read_text(encoding="utf-8"))
    category = (data.get("categories") or {}).get(REACHSAFETY_CATEGORY)
    if not category:
        raise KeyError(f"{REACHSAFETY_CATEGORY} not found in {CATEGORY_STRUCTURE}")
    verifiers = list(category.get("verifiers") or [])
    opted_out = {tool for tool, cats in (data.get("opt_out") or {}).items()
                 if REACHSAFETY_CATEGORY in (cats or [])}
    return sorted(t for t in verifiers if t not in opted_out)


def resolve_download_url(info: dict) -> str:
    """Resolve a tool's archive download URL.

    A direct `url:` in fm-tools is used as-is. A Zenodo `doi:` is resolved via the
    Zenodo record API to the (single, or largest .zip) artifact's download link.
    """
    if info.get("url"):
        return info["url"]
    doi = info.get("doi")
    if not doi:
        raise ValueError(f"{info['id']}: neither url nor doi for version {info['version']}")
    record_id = str(doi).rsplit(".", 1)[-1]  # 10.5281/zenodo.17741226 -> 17741226
    api = f"https://zenodo.org/api/records/{record_id}"
    with urllib.request.urlopen(api, timeout=60) as resp:
        meta = json.load(resp)
    files = meta.get("files") or []
    if not files:
        raise ValueError(f"{info['id']}: Zenodo record {record_id} lists no files")
    zips = [f for f in files if str(f.get("key", "")).lower().endswith(".zip")] or files
    chosen = max(zips, key=lambda f: f.get("size", 0))
    key = chosen["key"]
    return f"https://zenodo.org/records/{record_id}/files/{key}"
