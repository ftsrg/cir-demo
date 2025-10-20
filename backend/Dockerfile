FROM node:18-bookworm-slim

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
 && apt-get install -y --no-install-recommends ca-certificates libstdc++6


EXPOSE 5173

CMD ["node", "src/index.js"]
