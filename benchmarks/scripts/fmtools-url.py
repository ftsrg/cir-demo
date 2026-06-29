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

"""
Print the download URL of tool <id>'s archive (the version it entered SV-COMP
with), resolved from fm-tools. Used by the Makefile's download step.

Usage:
    python3 fmtools-url.py <tool-id>
"""

import sys

import _fmtools


def main() -> int:
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <tool-id>", file=sys.stderr)
        return 2
    tool_id = sys.argv[1]
    info = _fmtools.tool_info(tool_id)
    if not info:
        print(f"{tool_id}: not a {_fmtools.TARGET_COMPETITION} "
              f"Verification-track C verifier", file=sys.stderr)
        return 1
    print(_fmtools.resolve_download_url(info))
    return 0


if __name__ == "__main__":
    sys.exit(main())
