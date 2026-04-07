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

# Frontend (cir-demo/frontend)

Purpose
-------
A Vite + React single-page app providing a C++ editor (Monaco), a Generate button and tabbed outputs (LLVM, CIR, flat CIR, xcfa placeholder).

Development
-----------
Install dependencies and run the dev server:

```bash
cd frontend
npm install
npm run dev
```

The frontend uses an environment variable `VITE_API_ROOT` to know where to call the backend API. When running locally in dev mode, set it as follows:

```bash
VITE_API_ROOT=http://localhost:5173 npm run dev
```

Building for production
-----------------------
When building for the Docker deployment the frontend build is copied into an nginx image. The `frontend/Dockerfile` already copies the custom nginx config and certificate into the image.

Notes
-----
- The examples browser in the toolbar fetches the available example paths from `/api/examples` and shows a hierarchical selector.
- If you change `VITE_API_ROOT` please rebuild the frontend (env is baked into the build).
