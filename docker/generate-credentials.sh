#!/usr/bin/env bash
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
