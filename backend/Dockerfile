FROM node:25-trixie

WORKDIR /app

RUN wget 'https://github.com/ftsrg/theta/releases/latest/download/Theta.zip' -O /app/Theta.zip \
 && unzip /app/Theta.zip \
 && rm /app/Theta.zip \
 && sed -i 's/export JAVA_VERSION=17/export JAVA_VERSION=21/g' /app/Theta/theta-start.sh

# copy package and source
COPY backend /app/backend

WORKDIR /app/backend
RUN npm install --production

ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update \
 && apt-get install -y --no-install-recommends ca-certificates libstdc++6 \
	build-essential cmake ninja-build pkg-config python3 git \
    openjdk-21-jdk-headless libgomp1 libmpfr-dev

# Build the xcfa-mapper C++ tool so the backend can call it. We copy the
# source tree and invoke CMake to produce the binary at xcfa-mapper/build/xcfa-mapper
COPY xcfa-mapper /app/xcfa-mapper
WORKDIR /app/xcfa-mapper
RUN mkdir -p build \
 && cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release \
 && cmake --build build --target xcfa-mapper -j $(nproc)


WORKDIR /app/backend

EXPOSE 5173

CMD ["node", "src/index.js"]
