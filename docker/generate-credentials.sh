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

set -euo pipefail
OUT_HTPASS=docker/nginx/.htpasswd
OUT_JSON=backend/config/credentials.json

if [ $# -ne 2 ]; then
  echo "Usage: $0 USERNAME PASSWORD"
  exit 2
fi

USER="$1"
PASS="$2"

mkdir -p docker/nginx backend/config

# generate htpasswd APR1 entry using openssl (htpasswd-compatible)
HT=$(openssl passwd -apr1 "$PASS")
echo "${USER}:${HT}" > "${OUT_HTPASS}"
chmod 640 "${OUT_HTPASS}"

# generate simple plaintext JSON credentials for backend middleware
cat > "${OUT_JSON}" <<EOF
{
  "username": "${USER}",
  "password": "${PASS}"
}
EOF
chmod 600 "${OUT_JSON}"

echo "Wrote ${OUT_HTPASS} and ${OUT_JSON}"
