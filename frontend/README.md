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

The frontend uses an environment variable `VITE_API_ROOT` to know where to call the backend API. When running locally in dev mode, set it as follows (defaults to `https://localhost` in the docker compose config):

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
