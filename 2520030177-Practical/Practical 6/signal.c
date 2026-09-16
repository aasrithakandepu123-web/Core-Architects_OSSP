#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main()
{
    pid_t pid;

    printf("Parent Process ID = %d\n", getpid());
    

    pid = fork();

    if (pid == 0)
    {
        printf("Child Process ID = %d\n", getpid());
        printf("Generating SIGINT...\n");

        raise(SIGINT);
   }
   pid = fork();

    if (pid == 0)
    {
        printf("Child Process ID = %d\n", getpid());
        printf("Generating SIGTERM...\n");

        raise(SIGTERM);
   }
    pid = fork();

    if (pid == 0)
    {
        printf("Child Process ID = %d\n", getpid());
        printf("Generating SIGALRM...\n");

        raise(SIGALRM);
   }
    pid = fork();

    if (pid == 0)
    {
        printf("Child Process ID = %d\n", getpid());
        printf("Generating SIGKILL...\n");

        raise(SIGKILL);
   }
    pid = fork();

    if (pid == 0)
    {
        printf("Child Process ID = %d\n", getpid());
        printf("Generating SIGSTOP...\n");

        raise(SIGSTOP);
        }
        pid = fork();

    if (pid == 0)
    {
        printf("Child Process ID = %d\n", getpid());
        printf("Generating SIGCONT...\n");

        raise(SIGCONT);
   }
   }
   
