FROM node:18-alpine AS build
WORKDIR /app
COPY frontend/package.json ./
COPY frontend/package-lock.json* ./
COPY frontend/ .
RUN npm install
RUN npm run build

FROM nginx:stable-alpine
COPY --from=build /app/dist /usr/share/nginx/html
COPY docker/nginx/default.conf /etc/nginx/conf.d/default.conf
COPY --chown=nginx:nginx docker/certs/selfsigned.crt /etc/ssl/certs/selfsigned.crt
COPY --chown=nginx:nginx docker/certs/selfsigned.key /etc/ssl/private/selfsigned.key
COPY --chown=nginx:nginx docker/nginx/.htpasswd /etc/nginx/.htpasswd
EXPOSE 443
CMD ["nginx", "-g", "daemon off;"]
