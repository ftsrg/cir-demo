FROM ghcr.io/ftsrg/cir-demo-llvm:latest AS builder

ARG DEBIAN_FRONTEND=noninteractive
# FULL_STATIC=true  (default): rebuild LLVM as static archives, then build cir2c
#                               against them — clang/cir-opt/cir2c are all static.
# FULL_STATIC=false           : skip the LLVM rebuild; build only cir2c, linking it
#                               against the shared LLVM already in /opt/cir.
#                               clang/cir-opt in the export are the pre-built dynamic
#                               binaries from the base image.
ARG FULL_STATIC=true

RUN apt-get update \
 && apt-get install -y --no-install-recommends \
    zlib1g-dev \
    libstdc++-13-dev \
 && rm -rf /var/lib/apt/lists/*

WORKDIR /app

RUN ZLIB_LIBRARY=$(find /usr/lib /lib -name libz.a | head -n 1) && \
    ZLIB_INCLUDE_DIR=$(find /usr/include -name zlib.h | head -n 1 | xargs dirname) && \
    echo "ZLIB_LIBRARY=$ZLIB_LIBRARY" > /app/zlib-config.env && \
    echo "ZLIB_INCLUDE_DIR=$ZLIB_INCLUDE_DIR" >> /app/zlib-config.env

# Full static mode only: reconfigure /app/build (reuses /app/llvm-project, no re-clone)
# with BUILD_SHARED_LIBS=OFF and install to /opt/cir-static.
# Keeps RelWithDebInfo to match base-image compile flags so Ninja can reuse .o files
# and mostly just re-archives/re-links instead of recompiling.
RUN if [ "$FULL_STATIC" = "true" ]; then \
    . /app/zlib-config.env && \
    cmake -S llvm-project/llvm -B build -GNinja \
        -DCLANG_ENABLE_CIR=ON \
        -DLLVM_ENABLE_PROJECTS="clang;mlir" \
        -DCMAKE_BUILD_TYPE=RelWithDebInfo \
        -DLLVM_TARGETS_TO_BUILD=host \
        -DCMAKE_CXX_COMPILER=clang++ \
        -DCMAKE_C_COMPILER=clang \
        -DLLVM_USE_LINKER=lld \
        -DCMAKE_INSTALL_PREFIX=/opt/cir-static \
        -DLIBCLANG_BUILD_STATIC=ON \
        -DLLVM_BUILD_LLVM_DYLIB=OFF \
        -DLLVM_LINK_LLVM_DYLIB=OFF \
        -DBUILD_SHARED_LIBS=OFF \
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
        -DZLIB_INCLUDE_DIR="$ZLIB_INCLUDE_DIR" && \
    cmake --build build -j$(nproc) && \
    cmake --install build; \
    fi

COPY cir2c /app/cir2c
COPY .git /app/.git

# Build cir2c against the appropriate LLVM install.
# -static-libgcc/-static-libstdc++ eliminates the C++ runtime dep in both modes.
# In full static mode the LLVM cmake config resolves to .a archives, so LLVM itself
# is also statically linked without any extra linker flags.
RUN LLVM_INSTALL=$([ "$FULL_STATIC" = "true" ] && echo "/opt/cir-static" || echo "/opt/cir") && \
    rm -rf /app/cir2c/build && \
    cmake -S /app/cir2c -B /app/cir2c/build \
        -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_C_COMPILER=clang \
        -DCMAKE_CXX_COMPILER=clang++ \
        -DCMAKE_EXE_LINKER_FLAGS="-static-libgcc -static-libstdc++" \
        -DLLVM_DIR="$LLVM_INSTALL/lib/cmake/llvm" \
        -DMLIR_DIR="$LLVM_INSTALL/lib/cmake/mlir" && \
    cmake --build /app/cir2c/build -j$(nproc)

# Stage all exported artifacts under /export/ so the scratch and runtime stages
# can use identical COPY paths regardless of mode.
RUN LLVM_BIN=$([ "$FULL_STATIC" = "true" ] && echo "/opt/cir-static/bin" || echo "/opt/cir/bin") && \
    LLVM_LIB=$([ "$FULL_STATIC" = "true" ] && echo "/opt/cir-static/lib" || echo "/opt/cir/lib") && \
    mkdir -p /export/lib && \
    CLANG_BIN="$(find "$LLVM_BIN" -maxdepth 1 -type f \( -name 'clang-[0-9]*' -o -name clang \) | sort -V | tail -n 1)" && \
    if [ "$FULL_STATIC" = "true" ]; then strip "$CLANG_BIN"; fi && \
    cp -L "$CLANG_BIN"         /export/clang && \
    cp -L "$LLVM_BIN/cir-opt"  /export/cir-opt && \
    cp -L "$LLVM_BIN/clang++"  /export/clang++ && \
    cp -rL "$LLVM_LIB/clang"   /export/clang-resource && \
    strip /app/cir2c/build/cir2c && \
    cp /app/cir2c/build/cir2c  /export/cir2c && \
    cp /app/llvm-project/LICENSE.TXT /export/LICENSE.LLVM && \
    if [ "$FULL_STATIC" = "false" ]; then \
        find /opt/cir/lib -maxdepth 1 -name '*.so*' -exec cp -aP {} /export/lib/ \; ; \
    fi

ENV LD_LIBRARY_PATH=/opt/cir/lib

RUN echo "=== clang ===" && /export/clang --version && \
    printf "\n=== cir2c ===\n" && ls -lh /export/cir2c

# Export only the binaries (works for both modes; clang/cir-opt may be dynamic
# in FULL_STATIC=false mode).  /lib is empty in full static mode and contains
# the LLVM shared libraries in FULL_STATIC=false mode.
FROM scratch AS export
COPY --from=builder /export/clang          /clang
COPY --from=builder /export/cir-opt        /cir-opt
COPY --from=builder /export/clang++        /clang++
COPY --from=builder /export/clang-resource /include
COPY --from=builder /export/cir2c          /cir2c
COPY --from=builder /export/lib            /lib

# Runtime stage for testing.
# Based on the LLVM image so that shared libs in /opt/cir/lib are present when
# FULL_STATIC=false produces dynamically linked binaries.
FROM ghcr.io/ftsrg/cir-demo-llvm:latest AS runtime
COPY --from=builder /export/clang  /usr/local/bin/clang
COPY --from=builder /export/cir2c  /usr/local/bin/cir2c
RUN clang --version && cir2c --help || true
CMD ["/bin/bash"]
