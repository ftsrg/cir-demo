<!--
Copyright 2025 Budapest University of Technology and Economics

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
-->

This folder contains helper scripts and config for TLS + basic auth used by the docker deployment.

Usage

1) Generate a self-signed certificate (default CN=localhost):

   ./docker/generate-cert.sh

   Optionally change the subject:

   SUBJ="/CN=your.host.name" ./docker/generate-cert.sh

2) Generate credentials (username + password):

   ./docker/generate-credentials.sh alice s3cr3t

   This writes:
   - docker/nginx/.htpasswd  (used by nginx)
   - backend/config/credentials.json (used by backend Express middleware)

3) Build and start:

   docker compose build --no-cache
   docker compose up -d

Notes
- The generated cert is self-signed; browsers will warn. For production, use a CA-signed certificate.
- The backend credentials file is stored as plaintext JSON for simplicity; for real deployments use docker secrets or a vault.

Building the LLVM base image locally
-----------------------------------

If you want to build the heavy LLVM/ClangIR image locally (so the backend image can reuse it), you can build and tag it locally and optionally push it to GitHub Container Registry (ghcr.io).

1) Build locally and tag as the expected registry name (so backend builds pick it up):

```sh
docker build -f docker/llvm.Dockerfile -t ghcr.io/ftsrg/cir-demo-llvm:latest .
```

2) (Optional) Push to GitHub Container Registry if you want others or CI to pull it:

```sh
# Create a PAT with "read:packages" and "write:packages" and (recommended) repo scope.
echo "${CR_PAT}" | docker login ghcr.io -u YOUR_GITHUB_USERNAME --password-stdin
docker push ghcr.io/ftsrg/cir-demo-llvm:latest
```

After the image is available locally (or in ghcr), building the backend image will copy `/opt/cir` from that llvm image into the backend image. The backend Dockerfile accepts a build-arg `LLVM_IMAGE` so you can override the reference if you used a different tag:

```sh
docker build --build-arg LLVM_IMAGE=ghcr.io/ftsrg/cir-demo-llvm:latest -f backend/Dockerfile -t ghcr.io/ftsrg/cir-demo-backend:latest .
```

Notes:
- Building LLVM is resource- and time-intensive. Building it once locally and pushing it to ghcr is usually faster overall.
- The `docker/llvm.Dockerfile` builds LLVM **statically** (`BUILD_SHARED_LIBS=OFF`) and installs it into `/opt/cir` — this is what the backend copies into its final image and what the released binaries link against. clang, cir-opt and cir2c are therefore all statically linked against LLVM; only libc remains a dynamic dependency.
- The image ships only the installed `/opt/cir` tree: the LLVM source checkout and build directory are removed inside the same layer that builds them, so the multi-GB intermediates are not baked into the image.

Building static binaries
------------------------

`docker/static-build.Dockerfile` produces self-contained binaries (`clang`, `cir-opt`, `clang++`, `cir2c`) by building **only cir2c** on top of `ghcr.io/ftsrg/cir-demo-llvm:latest`. There is no LLVM rebuild — LLVM is already static in the base image — so this step is fast.

`-static-libgcc -static-libstdc++` is applied to cir2c (and to clang/cir-opt in the base image), so the C++ runtime is never a dynamic dependency.

The easiest entry point is the helper script, which exports the binaries to `./output/`:

```sh
./build-static-binaries.sh
```

Or build the `export` stage directly into the current directory with `--output`:

```sh
docker build -f docker/static-build.Dockerfile \
    --target export --output . .
```

The output directory will contain: `clang`, `clang++`, `cir-opt`, `cir2c`, an `include/` tree with the Clang resource headers, and `LICENSE.LLVM`.

To run a quick smoke-test instead of exporting, use `--target runtime`:

```sh
docker build -f docker/static-build.Dockerfile --target runtime -t cir2c-test .
docker run --rm cir2c-test clang --version
```

