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
OUT_DIR=docker/certs
CRT=${OUT_DIR}/selfsigned.crt
KEY=${OUT_DIR}/selfsigned.key

mkdir -p "${OUT_DIR}"

# Subject can be passed via env SUBJ, default CN=localhost
SUBJ=${SUBJ:-/CN=localhost}

openssl req -x509 -nodes -days 3650 -newkey rsa:2048 \
  -keyout "${KEY}" -out "${CRT}" -subj "${SUBJ}"

chmod 640 "${KEY}" "${CRT}"
echo "Created ${CRT} and ${KEY}"
