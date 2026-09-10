#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

void handle(int sig)
{
    printf("Signal %d received by parent\n", sig);
}

int main()
{
    pid_t pid;

    printf("Parent ID = %d\n", getpid());

    signal(SIGINT, handle);
    signal(SIGTERM, handle);
    signal(SIGUSR1, handle);

    pid = fork();

    if (pid == 0)
    {
        printf("Child ID = %d\n", getpid());
        printf("Sending SIGINT\n");
          raise(SIGINT);
        return 0;
    }
    wait(NULL);

    pid = fork();

    if (pid == 0)
    {
        printf("Child ID = %d\n", getpid());
        printf("Sending SIGTERM\n");
        raise(SIGTERM);
        return 0;
    }
    wait(NULL);

    pid = fork();

    if (pid == 0)
    {
        printf("Child ID = %d\n", getpid());
        printf("Sending SIGUSR1\n");
        raise(SIGUSR1);
        return 0;
    }
    wait(NULL);
   
    printf("All signals handled\n");

    return 0;
}
