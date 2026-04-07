FROM debian:trixie-slim

ARG DEBIAN_FRONTEND=noninteractive
ENV LC_ALL=C.UTF-8

RUN apt-get update \
 && apt-get install -y --no-install-recommends \
    ca-certificates git cmake ninja-build build-essential pkg-config python3 \
    clang lld wget curl ca-certificates libstdc++6 libgomp1 libmpfr-dev \
 && rm -rf /var/lib/apt/lists/*

WORKDIR /tmp

# Clone ClangIR (shallow) and build LLVM with CLANG_ENABLE_CIR
RUN git clone --depth=1 https://github.com/llvm/llvm-project.git && \
    cmake -S llvm-project/llvm -B build -GNinja \
        -DCLANG_ENABLE_CIR=ON \
        -DLLVM_ENABLE_PROJECTS="clang;mlir" \
        -DCMAKE_BUILD_TYPE=RelWithDebInfo \
        -DLLVM_TARGETS_TO_BUILD=host \
        -DCMAKE_CXX_COMPILER=clang++ \
        -DCMAKE_C_COMPILER=clang \
        -DLLVM_USE_LINKER=lld \
        -DBUILD_SHARED_LIBS=ON \
        -DCMAKE_INSTALL_PREFIX=/opt/cir \
        -DLLVM_FORCE_VC_REVISION=$(head -c7 llvm-project/.git/refs/heads/main)-zorn && \
    cmake --build build -j$(nproc) && \
    cmake --install build && \
    rm -rf /tmp/llvm-project /tmp/build

ENV PATH="/opt/cir/bin:${PATH}"

LABEL org.opencontainers.image.title="cir-demo-llvm" \
      org.opencontainers.image.description="Base image with LLVM+Clang built with CLANG_ENABLE_CIR and installed to /opt/cir"

CMD ["/bin/sh","-c","echo 'This image only provides LLVM in /opt/cir' && /bin/sh"]
