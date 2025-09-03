// main.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    // Path to the binaries in the bin/ directory
    char *programs[] = {"./b1", "./b2", "./b3"};

    int choice;

    while (1) {
        printf("\nSelect program to execute:\n");
        printf("1. b1 (Add two numbers)\n");
        printf("2. b2 (Sum from 1 to N)\n");
        printf("3. b3 (Hello message)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        if (choice < 1 || choice > 3) {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        pid_t pid = fork();

        if (pid < 0) {
            perror("Fork failed");
            exit(EXIT_FAILURE);
        }

        if (pid == 0) {
            // Child process
            char *envp[] = {NULL}; // No custom environment variables
            execle(programs[choice - 1], programs[choice - 1], NULL, envp);
            // If execle fails
            perror("execle failed");
            exit(EXIT_FAILURE);
        } else {
            // Parent process waits for child to finish
            wait(NULL);
        }
    }

    printf("Exiting main program.\n");
    return 0;
}
