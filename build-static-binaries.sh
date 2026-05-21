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

# Build static binaries using Docker Buildx (BuildKit)
# This script mirrors the GitHub Actions workflow using the Dockerfile in docker/static-build.Dockerfile

echo "Building static binaries with Docker Buildx…"
echo "This may take a while (1-2 hours depending on your hardware)."
echo

# Ensure docker is available
if ! command -v docker >/dev/null 2>&1; then
  echo "Error: docker is not installed or not on PATH." >&2
  exit 1
fi

# Ensure buildx is available
if ! sudo docker buildx version >/dev/null 2>&1; then
  echo "Docker Buildx is not installed/enabled."
  echo "Please install/enable Buildx: https://docs.docker.com/build/buildx/install/" >&2
  exit 1
fi

# Create and use a local builder if none is active
ACTIVE_BUILDER=$(sudo docker buildx ls | awk '/\*/ {print $1}' || true)
if [[ -z "${ACTIVE_BUILDER}" ]]; then
  echo "No active buildx builder found. Creating 'cir-static-builder'…"
  sudo docker buildx create --use --name cir-static-builder >/dev/null
fi

# Build and export only the final binaries using the `export` stage
rm -rf ./output
sudo docker buildx build \
  -f docker/static-build.Dockerfile \
  --target=export \
  --output type=local,dest=./output \
  .

# The export stage places the stripped binaries at the root of ./output
if [[ ! -f ./output/clang || ! -f ./output/xcfa-mapper ]]; then
  echo "Error: Expected binaries not found in ./output."
  echo "Contents of ./output:" >&2
  ls -lah ./output || true
  exit 1
fi

echo
echo "✓ Build complete!"
echo
echo "Binaries are available in ./output/"
echo "  - clang:        ./output/clang"
echo "  - xcfa-mapper:  ./output/xcfa-mapper"
echo
echo "Binary information:"
file ./output/clang || true
file ./output/xcfa-mapper || true
echo
sudo chown -R "$(id -u):$(id -g)" ./output
ls -lh ./output/
