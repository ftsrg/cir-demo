# CIR Demo Workspace

This workspace contains three projects:

- `backend` - Node.js Express server that serves example C++ files and exposes endpoints to run clang-related commands (placeholders provided).
- `frontend` - React + Vite web UI with a syntax-highlighted C++ editor (Monaco), resizable panes, tabs for outputs, and Material-like UI.
- `xcfa-mapper` - A minimal C++ project that will eventually convert clang IR elements to "xcfa". Currently prints "work in progress".

See the README in each subfolder for usage details.

```
HOST_API_ROOT=http://benchcloud.mit.bme.hu:5173 docker compose build --no-cache frontend
docker compose up -d
```