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

FROM nginx:stable-alpine
COPY --from=build /app/dist /usr/share/nginx/html
COPY nginx/nginx.conf /etc/nginx/nginx.conf
EXPOSE 80
CMD ["nginx", "-g", "daemon off;"]
