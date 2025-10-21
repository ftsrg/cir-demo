# CIR Demo Workspace

This workspace contains three projects:

- `backend` - Node.js Express server that serves example C++ files and exposes endpoints to run clang-related commands (placeholders provided).
- `frontend` - React + Vite web UI with a syntax-highlighted C++ editor (Monaco), resizable panes, tabs for outputs, and Material-like UI.
- `xcfa-mapper` - A minimal C++ project that will eventually convert clang IR elements to "xcfa". Currently prints "work in progress".

See the README in each subfolder for usage details.
See the README in each subfolder for usage details.

Deployment (Docker + TLS + Basic auth)
-------------------------------------

We provide simple helper scripts to run this workspace in Docker with TLS (self-signed)
and HTTP Basic authentication.

1) Generate a self-signed certificate (default CN=localhost):

	`./docker/generate-cert.sh`

	Optionally set subject CN:

	`SUBJ="/CN=your.host.name" ./docker/generate-cert.sh`

2) Generate credentials (username + password):

    `./docker/generate-credentials.sh alice s3cr3t`

	This writes:
	- docker/nginx/.htpasswd  (used by nginx)
	- backend/config/credentials.json (used by backend Express middleware)

3) Make helper scripts executable (optional):

	`./docker/setup-perms.sh`

4) Build and start the stack:

    `HOST_API_ROOT=https://benchcloud.mit.bme.hu:3333 docker compose build --no-cache`
	`docker compose up -d`

5) Visit the site at [https://benchcloud.mit.bme.hu:3000](https://benchcloud.mit.bme.hu:3333) (your browser will warn about the self-signed cert). Use the username/password from step 2.

Notes
- The backend credentials file is stored as plaintext JSON for simplicity in this demo. For production, use Docker secrets or a secrets manager and store only password hashes.
- For production use a CA-signed certificate (Let's Encrypt / internal CA) instead of the self-signed cert.
