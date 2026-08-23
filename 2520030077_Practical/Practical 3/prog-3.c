#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int pid;
    int status;

    printf("Before fork()\n");
    printf("PID: %d\n", getpid());
    printf("PPID: %d\n", getppid());
    printf("Process State: Running\n");

    pid = fork();

    if(pid < 0)
    {
        printf("Fork failed\n");
    }

    if(pid == 0)
    {
        printf("\nChild Process\n");
        printf("PID: %d\n", getpid());
        printf("PPID: %d\n", getppid());
        printf("Process State: Running\n");

        printf("Child is waiting for 5 seconds...\n");
        sleep(30);

        printf("Child Process Terminated\n");
        return 0;
    }
    else
    {
        printf("\nParent Process\n");
        printf("PID: %d\n", getpid());
        printf("PPID: %d\n", getppid());
        printf("Child PID: %d\n", pid);
        printf("Process State: Running\n");

        printf("Parent is waiting for child...\n");
        wait(&status);

        printf("Child has terminated.\n");
        printf("Parent Process Continuing...\n");
    }

    return 0;
}
