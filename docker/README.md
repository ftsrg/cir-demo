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
