#!/usr/bin/env bash
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

#
# Pre-commit helper script to check and add license headers
# Usage: ./check-licenses.sh [--fix]
#

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

LICENSE_SCRIPT="$REPO_ROOT/.github/scripts/add-license-header.py"
LICENSE_HEADER="$REPO_ROOT/.github/scripts/license-header.txt"

# Check if Python is available
if ! command -v python3 &> /dev/null; then
    echo "❌ Error: python3 is required but not found"
    exit 1
fi

# Check if script exists
if [ ! -f "$LICENSE_SCRIPT" ]; then
    echo "❌ Error: License script not found at $LICENSE_SCRIPT"
    exit 1
fi

# Check if license header exists
if [ ! -f "$LICENSE_HEADER" ]; then
    echo "❌ Error: License header not found at $LICENSE_HEADER"
    exit 1
fi

# Parse arguments
FIX_MODE=false
if [ "$1" == "--fix" ]; then
    FIX_MODE=true
fi

echo "🔍 Checking for missing license headers..."
echo ""

cd "$REPO_ROOT"

if [ "$FIX_MODE" = true ]; then
    echo "🔧 Fix mode: Adding license headers to files..."
    python3 "$LICENSE_SCRIPT" "$LICENSE_HEADER" .
    exit_code=$?
    
    if [ $exit_code -eq 0 ]; then
        echo ""
        echo "✅ License headers have been added successfully!"
        echo "📝 Please review the changes and commit them."
    else
        echo ""
        echo "❌ Error occurred while adding license headers"
        exit 1
    fi
else
    echo "🔍 Dry-run mode: Checking which files need license headers..."
    python3 "$LICENSE_SCRIPT" "$LICENSE_HEADER" . --dry-run > /tmp/license-check.log 2>&1
    exit_code=$?
    
    # Always show the output
    cat /tmp/license-check.log
    
    # Extract statistics
    MODIFIED=$(grep "Files that would be modified:" /tmp/license-check.log | awk '{print $NF}')
    
    echo ""
    if [ "$MODIFIED" -gt 0 ]; then
        echo "❌ Found $MODIFIED file(s) missing license headers"
        echo ""
        echo "To fix this, run:"
        echo "  $0 --fix"
        echo ""
        echo "Or manually:"
        echo "  python3 .github/scripts/add-license-header.py .github/scripts/license-header.txt ."
        exit 1
    else
        echo "✅ All files have proper license headers!"
        exit 0
    fi
fi
