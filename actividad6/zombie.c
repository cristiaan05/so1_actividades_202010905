#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // Error en la creación del proceso
        perror("fork() error");
        exit(1);
    } else if (pid == 0) {
        // Este es el proceso hijo
        printf("Proceso hijo (PID: %d) ejecutándose y terminando...\n", getpid());
        exit(0);  // El proceso hijo termina inmediatamente
    } else {
        // Este es el proceso padre
        printf("Proceso padre (PID: %d), hijo (PID: %d) creado.\n", getpid(), pid);
        printf("El proceso hijo debería estar en estado zombie durante 60 segundos.\n");

        // Dormir durante 60 segundos para permitir que el hijo permanezca en estado zombie
        sleep(60);

        // Eliminar al proceso hijo zombie (recoger su estado)
        wait(NULL);

        printf("Proceso hijo recolectado y eliminado del estado zombie.\n");
    }

    return 0;
}

