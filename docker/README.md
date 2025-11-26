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

