#!/usr/bin/env bash
# Make helper scripts executable
chmod +x ./docker/generate-cert.sh ./docker/generate-credentials.sh || true
chmod 640 ./docker/certs/* 2>/dev/null || true
