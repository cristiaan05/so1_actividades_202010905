#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void *thread_function(void *arg) {
    printf("Hilo creado, ejecutando en el proceso con PID: %d\n", getpid());

    return NULL;
}

int main() {
    pid_t pid;
    pid = fork();

    if (pid == 0) {
        fork();

        pthread_t thread;

        if (pthread_create(&thread, NULL, thread_function, NULL) != 0) {
            perror("Error al crear el hilo.");

            exit(1);
        }

        pthread_join(thread, NULL);
    }

    fork();

    if (pid > 0) {
        while (wait(NULL) > 0);
    }

    return 0;
}