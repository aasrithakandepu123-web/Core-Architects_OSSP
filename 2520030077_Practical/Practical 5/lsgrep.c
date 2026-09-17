#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
    int fd[2];
    pipe(fd);
    int pid;
    pid=fork();
    if(pid==0)
    {
        printf("LS Command\n");
        close(fd[0]);
        dup2(fd[1],1);
        close(fd[1]);
        execlp("ls","ls","-l",NULL);
    }
    else
    {
        pid=fork();
        if(pid==0)
        {
            printf("Grep Command\n");
            close(fd[1]);
            dup2(fd[0],0);
            close(fd[0]);
            execlp("grep","grep",".c",NULL);
        }
        else
        {
            close(fd[0]);
            close(fd[1]);

            wait(NULL);
            wait(NULL);
        }
