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

# Backend (cir-demo/backend)

Purpose
-------
The backend is a small Express server that:
- Serves example C++ files (under `backend/examples`)
- Exposes endpoints to run clang to produce LLVM IR / CIR outputs
- Provides a `/api/examples` endpoint for the frontend to list and load examples

Running locally (node)
----------------------
Install dependencies and run:

```bash
cd backend
npm install
npm run start
```

The server listens on port 5173 by default. It expects the examples directory to be present in `../backend/examples`.

Authentication
--------------
In the Docker deployment the backend expects a credentials file at `backend/config/credentials.json` and the app enforces HTTP Basic authentication on `/api/*` routes. You can generate the credentials using the script in the `docker` folder:

```bash
./docker/generate-credentials.sh alice s3cr3t
```

This writes `backend/config/credentials.json` (used by the backend middleware) and `docker/nginx/.htpasswd` (used by nginx).

Environment
-----------
- `PORT` — port to listen on (default 5173)
- `BASIC_AUTH_FILE` — path to credentials JSON (default: `/app/config/credentials.json` in docker)

Notes
-----
The credentials file in this demo is plaintext for simplicity. For production, use Docker secrets or a vault and store hashed passwords.
