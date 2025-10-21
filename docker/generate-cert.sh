#!/usr/bin/env bash
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
