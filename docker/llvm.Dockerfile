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

# The actual build (LLVM+Clang+MLIR with ClangIR, then libc++/libc++abi/libunwind,
# all as static archives into /opt/cir) lives in build-llvm.sh so it can also be
# run directly on a host machine without Docker — see docker/README.md.
# --clean removes the (multi-GB) source checkout and build directories within
# this same RUN/layer, so they never end up baked into the image.
COPY docker/build-llvm.sh /build/build-llvm.sh
RUN chmod +x /build/build-llvm.sh && \
    /build/build-llvm.sh --src /build/llvm-project --prefix /opt/cir --clean && \
    rm -rf /build/llvm-project /build/build-llvm.sh

ENV PATH="/opt/cir/bin:${PATH}"

LABEL org.opencontainers.image.title="cir-demo-llvm" \
      org.opencontainers.image.description="Base image with LLVM+Clang (CLANG_ENABLE_CIR) and libc++/libc++abi/libunwind, all built as static archives and installed to /opt/cir"

CMD ["/bin/sh","-c","echo 'This image only provides static LLVM in /opt/cir' && /bin/sh"]
