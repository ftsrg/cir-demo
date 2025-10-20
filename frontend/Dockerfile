FROM node:18-alpine AS build
ARG VITE_API_ROOT
ENV VITE_API_ROOT=${VITE_API_ROOT}
WORKDIR /app
COPY frontend/package.json ./
COPY frontend/package-lock.json* ./
COPY frontend/ .
RUN npm install
# ensure the build picks up VITE_API_ROOT from the environment
RUN echo "VITE_API_ROOT=$VITE_API_ROOT" && npm run build

FROM node:18-alpine
WORKDIR /app
RUN npm install -g serve
COPY --from=build /app/dist ./dist
EXPOSE 3000
CMD ["serve", "-s", "dist", "-l", "3000"]
