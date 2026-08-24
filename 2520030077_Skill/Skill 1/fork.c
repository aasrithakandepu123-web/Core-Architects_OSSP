#include<stdio.h>
#include<unistd.h>
int main()
{
int pid;
pid = fork();
if(pid==0)
fork();
printf("hello/n");
else if(pid>0)
printf("hai");
else
printf("error");
}
