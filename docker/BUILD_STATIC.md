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

# Building Static Binaries

This directory contains configuration for building static binaries of `clang` (with ClangIR support) and `xcfa-mapper`.

## Building Locally

To build the static binaries on your local machine:

```bash
./build-static-binaries.sh
```

This will:
1. Build LLVM with ClangIR support statically
2. Build xcfa-mapper statically
3. Strip the binaries
4. Output them to `./output/` directory

**Note:** The build process can take 1-2 hours depending on your hardware.

### Requirements

- Docker
- At least 16GB RAM
- At least 50GB free disk space

### Manual Build

If you want more control over the build process:

```bash
# Build with Docker
docker build -f docker/static-build.Dockerfile --target=builder -o type=local,dest=./output .

# The binaries will be in:
# - ./output/build/llvm-install/bin/clang
# - ./output/build/xcfa-mapper/build/xcfa-mapper
```

## CI/CD

The GitHub Actions workflow (`.github/workflows/build-static-binaries.yml`) automatically builds and uploads static binaries on:
- Push to `main` branch
- Pull requests
- Manual workflow dispatch
- Git tags (will create a release)

Built binaries are uploaded as artifacts and retained for 90 days.

### Downloading from CI

1. Go to the [Actions tab](../../actions/workflows/build-static-binaries.yml)
2. Click on a successful workflow run
3. Download the artifacts:
   - `clang-static-*`
   - `xcfa-mapper-static-*`

## Dockerfile Details

The `docker/static-build.Dockerfile` uses a multi-stage build:

1. **builder**: Builds LLVM and xcfa-mapper with static linking
2. **export**: Contains only the stripped binaries (for extraction)
3. **runtime**: Optional runtime image for testing

### Static Build Flags

LLVM is built with the following key flags for static linking:
- `BUILD_SHARED_LIBS=OFF` - Build only static libraries
- `LLVM_ENABLE_PIC=OFF` - Disable position-independent code
- `LIBCLANG_BUILD_STATIC=ON` - Build static libclang
- `LLVM_BUILD_LLVM_DYLIB=OFF` - Disable dynamic LLVM library
- `CMAKE_EXE_LINKER_FLAGS="-static-libgcc -static-libstdc++"` - Static C++ runtime

## Testing

To test the runtime image with both binaries installed:

```bash
docker build -f docker/static-build.Dockerfile --target=runtime -t cir-static-test .
docker run -it cir-static-test bash

# Inside the container:
clang --version
xcfa-mapper --help
```

## Troubleshooting

### Out of Memory
If the build fails with OOM errors, you can:
- Reduce parallel jobs by modifying `-j$(nproc)` in the Dockerfile
- Increase Docker's memory limit in Docker Desktop settings

### Build Cache
Docker BuildKit cache is used in the GitHub Actions workflow to speed up builds. To clear local cache:

```bash
docker builder prune
```
