# !/bin/bash

# Verifica si jq y curl están instalados

command -v jq >/dev/null 2>&1 || { echo >&2 "Se requiere jq pero no está instalado. Instálalo con 'sudo apt-get install jq' (para sistemas basados en Debian/Ubuntu) o el comando correspondiente para tu sistema."; exit 1; }
command -v curl >/dev/null 2>&1 || { echo >&2 "Se requiere curl pero no está instalado. Instálalo con 'sudo apt-get install curl' (para sistemas basados en Debian/Ubuntu) o el comando correspondiente para tu sistema."; exit 1; }

read GITHUB_USER
curl -s https://api.github.com/users/$GITHUB_USER > githubUser.json

# Almacenar los valores

export GITHUB_ID=$(jq .id githubUser.json)
export GITHUB_DATE=$(jq .created_at githubUser.json)

# Crear mensaje

export MESSAGE="Hola $GITHUB_USER User ID $GITHUB_ID Cuenta fue creada el $GITHUB_DATE"

# Escribir mensaje en pantalla

echo $MESSAGE

# Escribir mensaje en archivo

path="/tmp/$(date +%Y-%m-%d)"
mkdir -p "$path"
logfile="$path/saludos.log"
touch "$logfile"
echo $MESSAGE >> $logfile
