# Servicio de Saludo Infinito

Este servicio de systemd ejecuta un script que imprime un saludo junto con la fecha actual, de forma infinita con una pausa de un segundo.

## Instalación

1. Copiar el script `actividad4.sh` a `/usr/local/bin/` y darle permisos de ejecución.
2. Crear el archivo de unidad en `/etc/systemd/system/actividad4.service` con el contenido especificado.
3. Recargar los demonios de systemd, habilitar y arrancar el servicio con los siguientes comandos:

```bash
sudo systemctl daemon-reload
sudo systemctl enable actividad4.service
sudo systemctl start actividad4.service
```

# Para los logs usar el comando
```bash
sudo journalctl -u saludo.service -f
```

# Para ver el estado del servicio
```bash
sudo systemctl status script.service
```

