FROM node:25-trixie

WORKDIR /app

# copy package and source
COPY backend/package.json ./
COPY backend/package-lock.json* ./
COPY backend/src ./src
COPY backend/examples ./examples
COPY backend/bin ./bin

RUN npm install --production

ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update \
 && apt-get install -y --no-install-recommends ca-certificates libstdc++6 \
	build-essential cmake ninja-build pkg-config python3 git

# Build the xcfa-mapper C++ tool so the backend can call it. We copy the
# source tree and invoke CMake to produce the binary at xcfa-mapper/build/xcfa-mapper
COPY xcfa-mapper /xcfa-mapper
WORKDIR /xcfa-mapper
RUN mkdir -p build \
 && cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release \
 && cmake --build build --target xcfa-mapper -j $(nproc)

WORKDIR /app


EXPOSE 5173

CMD ["node", "src/index.js"]
