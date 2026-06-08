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
- The `docker/llvm.Dockerfile` installs LLVM into `/opt/cir` (this is what the backend copies into its final image).

Building static binaries
------------------------

`docker/static-build.Dockerfile` produces self-contained binaries (`clang`, `cir-opt`, `clang++`, `cir2c`) by building on top of `ghcr.io/ftsrg/cir-demo-llvm:latest`.

It has two modes controlled by the `FULL_STATIC` build argument:

| `FULL_STATIC` | What happens | Typical use |
|---|---|---|
| `true` (default) | Rebuilds LLVM with `BUILD_SHARED_LIBS=OFF` and installs to `/opt/cir-static`; builds cir2c against the resulting `.a` archives. All exported binaries are statically linked against LLVM. | Release / CI artifacts |
| `false` | Skips the LLVM rebuild entirely; builds only cir2c linked against the shared LLVM already in `/opt/cir`. clang/cir-opt in the export are the pre-built dynamic binaries from the base image. | Fast iteration / local testing |

In both modes `-static-libgcc -static-libstdc++` is applied, so the C++ runtime is never a dynamic dependency.

Export the binaries directly to the current directory with `--output`:

```sh
# Full static build (default) — slow, suitable for release artifacts
docker build -f docker/static-build.Dockerfile \
    --target export --output . .

# cir2c-only static — skips the LLVM rebuild, much faster
docker build -f docker/static-build.Dockerfile \
    --build-arg FULL_STATIC=false \
    --target export --output . .
```

The output directory will contain: `clang`, `clang++`, `cir-opt`, `cir2c`, and an `include/` tree with the Clang resource headers.

To run a quick smoke-test instead of exporting, use `--target runtime`:

```sh
docker build -f docker/static-build.Dockerfile --target runtime -t cir2c-test .
docker run --rm cir2c-test clang --version
```

