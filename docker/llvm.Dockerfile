FROM debian:trixie-slim

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
        -DCMAKE_INSTALL_PREFIX=/opt/cir \
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
RUN cp clangir/LICENSE.TXT /opt/cir/LICENSE.LLVM && \
    rm -rf /app/clangir /app/llvm-build

ENV PATH="/opt/cir/bin:${PATH}"

LABEL org.opencontainers.image.title="cir-demo-llvm" \
      org.opencontainers.image.description="Base image with LLVM+Clang built with CLANG_ENABLE_CIR as static archives and installed to /opt/cir"

CMD ["/bin/sh","-c","echo 'This image only provides static LLVM in /opt/cir' && /bin/sh"]
