#!/usr/bin/env bash
#
# Copyright 2025 Budapest University of Technology and Economics
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Builds LLVM+Clang+MLIR (with ClangIR, CLANG_ENABLE_CIR=ON) plus
# libc++/libc++abi/libunwind, all as static archives, into a single install
# prefix. Used by docker/llvm.Dockerfile, and runnable directly on a host
# machine to produce the same toolchain without Docker — see docker/README.md.
#
# Requires: cmake, ninja, a C/C++ compiler (clang recommended), lld, git,
# static zlib (libz.a + zlib.h).
#
# Usage: build-llvm.sh [--src DIR] [--prefix DIR] [--jobs N] [--clean]
#   --src DIR     llvm-project checkout to build from; cloned if missing.
#                 Default: ./llvm-project
#   --prefix DIR  Install prefix. Default: /opt/cir
#   --jobs N      Parallel build jobs. Default: nproc
#   --clean       Remove the (large) build directories under <src>/.. when done.
#                 Leave this off for local/incremental rebuilds.

set -euo pipefail

usage() {
    echo "Usage: $0 [--src DIR] [--prefix DIR] [--jobs N] [--clean]" >&2
    echo "  --src DIR     llvm-project checkout to build from; cloned if missing. Default: ./llvm-project" >&2
    echo "  --prefix DIR  Install prefix. Default: /opt/cir" >&2
    echo "  --jobs N      Parallel build jobs. Default: nproc" >&2
    echo "  --clean       Remove the build directories when done (skip for incremental local rebuilds)" >&2
    exit "${1:-1}"
}

SRC="llvm-project"
PREFIX="/opt/cir"
JOBS="$(nproc)"
CLEAN=false

while [[ $# -gt 0 ]]; do
    case "$1" in
        --src)     SRC="$2"; shift 2 ;;
        --prefix)  PREFIX="$2"; shift 2 ;;
        --jobs)    JOBS="$2"; shift 2 ;;
        --clean)   CLEAN=true; shift ;;
        -h|--help) usage 0 ;;
        *) echo "Unknown option: $1" >&2; usage ;;
    esac
done

if [[ -d "$SRC" ]]; then
    [[ -f "$SRC/llvm/CMakeLists.txt" ]] || {
        echo "Error: $SRC exists but doesn't look like an llvm-project checkout (no llvm/CMakeLists.txt)." >&2
        exit 1
    }
    echo "==> Reusing existing checkout at $SRC"
else
    echo "==> Cloning llvm-project (shallow) into $SRC"
    git clone --depth=1 https://github.com/llvm/llvm-project.git "$SRC"
fi

SRC="$(realpath -m "$SRC")"
# Must be absolute: it's used as -DCMAKE_C_COMPILER="$PREFIX/bin/clang" for the
# runtimes build below, and CMake's project() rejects a relative compiler path.
PREFIX="$(realpath -m "$PREFIX")"
BUILD_ROOT="$(dirname "$SRC")"
LLVM_BUILD="$BUILD_ROOT/llvm-build"
RUNTIMES_BUILD="$BUILD_ROOT/runtimes-build"

# Find static zlib (used so the resulting clang/cir-opt don't need libz.so).
ZLIB_LIBRARY=$(find /usr/lib /lib -name 'libz.a' 2>/dev/null | head -n 1)
ZLIB_INCLUDE_DIR=$(find /usr/include -name 'zlib.h' 2>/dev/null | head -n 1 | xargs -r dirname)
if [[ -z "$ZLIB_LIBRARY" || -z "$ZLIB_INCLUDE_DIR" ]]; then
    echo "Error: static zlib not found (need libz.a + zlib.h, e.g. the zlib1g-dev package)." >&2
    exit 1
fi

echo "==> Configuring LLVM+Clang+MLIR (-> $PREFIX)"
cmake -S "$SRC/llvm" -B "$LLVM_BUILD" -GNinja \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX="$PREFIX" \
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

echo "==> Building and installing LLVM+Clang+MLIR ($JOBS jobs)"
cmake --build "$LLVM_BUILD" -j"$JOBS"
cmake --install "$LLVM_BUILD"

# libc++/libc++abi/libunwind, built against the clang just installed above and
# installed into the same prefix. Static-only, to match the rest of this build.
# This is what lets clang++ -stdlib=libc++ avoid cir2c's no-externalize-std
# limitation: libstdc++ keeps some container internals (e.g. std::list's node
# helpers) in out-of-line .so-only symbols that ClangIR never sees a body for,
# while libc++ keeps list/map/set/deque fully header-templated.
echo "==> Configuring libc++/libc++abi/libunwind (-> $PREFIX)"
cmake -S "$SRC/runtimes" -B "$RUNTIMES_BUILD" -GNinja \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_C_COMPILER="$PREFIX/bin/clang" \
    -DCMAKE_CXX_COMPILER="$PREFIX/bin/clang++" \
    -DCMAKE_INSTALL_PREFIX="$PREFIX" \
    -DLLVM_DIR="$PREFIX/lib/cmake/llvm" \
    -DClang_DIR="$PREFIX/lib/cmake/clang" \
    -DLLVM_USE_LINKER=lld \
    -DLLVM_ENABLE_RUNTIMES="libcxx;libcxxabi;libunwind" \
    -DLIBCXX_ENABLE_SHARED=OFF \
    -DLIBCXX_ENABLE_STATIC=ON \
    -DLIBCXX_STATICALLY_LINK_ABI_IN_STATIC_LIBRARY=ON \
    -DLIBCXXABI_ENABLE_SHARED=OFF \
    -DLIBCXXABI_ENABLE_STATIC=ON \
    -DLIBCXXABI_ENABLE_STATIC_UNWINDER=ON \
    -DLIBCXXABI_STATICALLY_LINK_UNWINDER_IN_STATIC_LIBRARY=ON \
    -DLIBUNWIND_ENABLE_SHARED=OFF \
    -DLIBUNWIND_ENABLE_STATIC=ON

echo "==> Building and installing libc++/libc++abi/libunwind ($JOBS jobs)"
cmake --build "$RUNTIMES_BUILD" -j"$JOBS" --target install-cxx install-cxxabi install-unwind

cp "$SRC/LICENSE.TXT" "$PREFIX/LICENSE.LLVM"

if [[ "$CLEAN" == true ]]; then
    echo "==> Removing build directories"
    rm -rf "$LLVM_BUILD" "$RUNTIMES_BUILD"
fi

echo "==> Done. Installed to $PREFIX"
