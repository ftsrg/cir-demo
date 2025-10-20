FROM node:18-alpine

WORKDIR /app

# copy package and source
COPY backend/package.json ./
COPY backend/package-lock.json* ./
COPY backend/src ./src
COPY backend/examples ./examples
COPY backend/bin ./bin

RUN npm install --production

EXPOSE 5173

CMD ["node", "src/index.js"]
