FROM debian:trixie-slim AS builder

ARG DEBIAN_FRONTEND=noninteractive
ENV LC_ALL=C.UTF-8

RUN apt-get update \
 && apt-get install -y --no-install-recommends \
    ca-certificates \
    git \
    cmake \
    ninja-build \
    build-essential \
    pkg-config \
    python3 \
    clang \
    lld \
    wget \
    curl \
    zlib1g-dev \
    libstdc++-13-dev \
 && rm -rf /var/lib/apt/lists/*

WORKDIR /build

# Clone ClangIR (shallow) for LLVM with CIR support
RUN git clone --depth=1 https://github.com/llvm/llvm-project.git clangir

# Find zlib for static linking
RUN ZLIB_LIBRARY=$(find /usr/lib /lib -name libz.a | head -n 1) && \
    ZLIB_INCLUDE_DIR=$(find /usr/include -name zlib.h | head -n 1 | xargs dirname) && \
    echo "ZLIB_LIBRARY=$ZLIB_LIBRARY" > /build/zlib-config.env && \
    echo "ZLIB_INCLUDE_DIR=$ZLIB_INCLUDE_DIR" >> /build/zlib-config.env

# Configure LLVM with static build flags
RUN . /build/zlib-config.env && \
    cmake -S clangir/llvm -B llvm-build -GNinja \
        -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_INSTALL_PREFIX=/build/llvm-install \
        -DCMAKE_C_COMPILER=clang \
        -DCMAKE_CXX_COMPILER=clang++ \
        -DLLVM_USE_LINKER=lld \
        -DCLANG_ENABLE_CIR=ON \
        -DLLVM_ENABLE_PROJECTS="clang;mlir" \
        -DLLVM_TARGETS_TO_BUILD=host \
        -DLIBCLANG_BUILD_STATIC=ON \
        -DLLVM_BUILD_LLVM_DYLIB=OFF \
        -DLLVM_LINK_LLVM_DYLIB=OFF \
        -DBUILD_SHARED_LIBS=OFF \
        -DLLVM_ENABLE_PIC=OFF \
        -DLLVM_ENABLE_TERMINFO=OFF \
        -DLLVM_ENABLE_ZLIB=FORCE_ON \
        -DLLVM_ENABLE_ZSTD=OFF \
        -DLLVM_ENABLE_LIBXML2=OFF \
        -DLLVM_ENABLE_BINDINGS=OFF \
        -DLLVM_ENABLE_OCAMLDOC=OFF \
        -DLLVM_ENABLE_Z3_SOLVER=OFF \
        -DLLVM_HAVE_LIBXAR=OFF \
        -DLLVM_INCLUDE_BENCHMARKS=OFF \
        -DLLVM_INCLUDE_TESTS=OFF \
        -DLLVM_TOOL_REMARKS_SHLIB_BUILD=OFF \
        -DZLIB_LIBRARY="$ZLIB_LIBRARY" \
        -DZLIB_INCLUDE_DIR="$ZLIB_INCLUDE_DIR"

# Build and install LLVM
RUN cmake --build llvm-build -j$(nproc) && \
    cmake --install llvm-build

# Copy xcfa-mapper source
COPY xcfa-mapper /build/xcfa-mapper

# Verify MLIRCIR was built and installed
RUN echo "=== Checking for CIR dialect libraries ===" && \
    ls -lh /build/llvm-install/lib/libMLIRCIR* || \
    (echo "WARNING: libMLIRCIR not found in install directory" && \
     echo "Checking build directory:" && \
     find /build/llvm-build -name "libMLIRCIR*")

# Configure and build xcfa-mapper statically
RUN rm -rf /build/xcfa-mapper/build && \
    cd /build/xcfa-mapper && \
    mkdir -p build && \
    cd build && \
    cmake .. \
        -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_C_COMPILER=clang \
        -DCMAKE_CXX_COMPILER=clang++ \
        -DCMAKE_EXE_LINKER_FLAGS="-static-libgcc -static-libstdc++" \
        -DLLVM_DIR=/build/llvm-install/lib/cmake/llvm \
        -DMLIR_DIR=/build/llvm-install/lib/cmake/mlir && \
    make -j$(nproc)

# Strip binaries
RUN CLANG_BIN="$(find /build/llvm-install/bin -maxdepth 1 -type f \( -name 'clang-[0-9]*' -o -name clang \) | sort -V | tail -n 1)" && \
    test -n "$CLANG_BIN" && \
    strip "$CLANG_BIN" && \
    ln -sf "$(basename "$CLANG_BIN")" /build/llvm-install/bin/clang-static && \
    strip /build/xcfa-mapper/build/xcfa-mapper

# Verify binaries
RUN echo "=== Clang binary info ===" && \
    ls -lh /build/llvm-install/bin/clang-static && \
    /build/llvm-install/bin/clang-static --version && \
    echo "\n=== xcfa-mapper binary info ===" && \
    ls -lh /build/xcfa-mapper/build/xcfa-mapper

# Final stage - copy only the binaries
FROM scratch AS export
COPY --from=builder /build/llvm-install/bin/clang-static /clang
COPY --from=builder /build/xcfa-mapper/build/xcfa-mapper /xcfa-mapper

# Runtime stage for testing (optional)
FROM debian:trixie-slim AS runtime
COPY --from=builder /build/llvm-install/bin/clang /usr/local/bin/clang
COPY --from=builder /build/xcfa-mapper/build/xcfa-mapper /usr/local/bin/xcfa-mapper
RUN clang --version && xcfa-mapper --help || true
CMD ["/bin/bash"]
