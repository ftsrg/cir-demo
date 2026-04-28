ARG LLVM_IMAGE=ghcr.io/ftsrg/cir-demo-llvm:latest

FROM ${LLVM_IMAGE}

WORKDIR /app

# Install Node.js and required dependencies
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update \
 && apt-get install -y --no-install-recommends ca-certificates libstdc++6 \
    build-essential cmake ninja-build pkg-config python3 git \
    openjdk-21-jdk-headless libgomp1 libmpfr-dev \
    curl wget unzip \
 && curl -fsSL https://deb.nodesource.com/setup_21.x | bash - \
 && apt-get install -y nodejs \
 && rm -rf /var/lib/apt/lists/*

# RUN wget 'https://github.com/ftsrg/theta/releases/latest/download/Theta-svcomp.zip' -O /app/Theta.zip \
RUN wget 'https://github.com/ftsrg/theta/releases/download/v6.27.14/Theta.zip' -O /app/Theta.zip \
 && unzip /app/Theta.zip \
 && rm /app/Theta.zip

# copy package and source
COPY backend /app/backend

# Link /opt/cir to /app/backend/bin instead of copying
RUN ln -s /opt/cir /app/backend/bin

WORKDIR /app/backend
RUN npm install --production

# Build the xcfa-mapper C++ tool so the backend can call it. We copy the
# source tree and invoke CMake to produce the binary at xcfa-mapper/build/xcfa-mapper
COPY xcfa-mapper /app/xcfa-mapper
COPY .git /app/.git
WORKDIR /app/xcfa-mapper
RUN mkdir -p build \
 && cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release \
 && cmake --build build --target xcfa-mapper -j $(nproc)


WORKDIR /app/backend

EXPOSE 5173

CMD ["node", "src/index.js"]
