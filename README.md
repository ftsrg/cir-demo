# CIR Demo

An interactive web-based platform for exploring C/C++ code analysis using Clang IR. This demo provides a syntax-highlighted code editor where you can write or load C++ examples, analyze them with [Theta](https://github.com/ftsrg/theta) via Clang-based tools, and visualize the results.

## What's Inside

- **Web Interface**: React-based UI with Monaco editor for C++ code editing
- **Analysis Backend**: Node.js server that processes code using Clang/LLVM toolchain and Theta
- **XCFA Mapper**: Converts Clang IR to extended control flow automata (XCFA) format (in C syntax currently)
- **Example Library**: Pre-loaded C++ examples demonstrating various language features (templates, inheritance, STL containers, etc.)

## Getting Started

### Prerequisites

- Docker and Docker Compose installed on your system

### Quick Start

1. **Start the application**:
   ```bash
   docker compose up -d
   ```

2. **Access the web interface**:
   - Open your browser and navigate to `https://localhost:3333`
   - Your browser will warn about the self-signed certificate—accept it to proceed
   - Login with the default credentials:
     - **Username**: `admin`
     - **Password**: `admin`

3. **Start exploring**:
   - Load example C++ files from the library
   - Write your own C++ code in the editor
   - Run analysis tools and view the results

### Stopping the Application

```bash
docker compose down
```

## Notes

- The application uses a self-signed TLS certificate for HTTPS
- Default credentials are for demonstration purposes only
- All container images are pre-built and pulled automatically
