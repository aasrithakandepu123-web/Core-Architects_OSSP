#include<stdio.h>
#include<unistd.h>
#include<time.h>
int main()
{
int fd[2];
pipe(fd);
int pid,data;
int count;
double communication_Ef;
pid=fork();
double start,end;
double timetaken;
start=clock();
if(pid==0)
{
printf("Consumer");
close(fd[1]);
for(int i=0;i<5;i++)
{
read(fd[0],&data,sizeof(data));
printf("Consumed %d\n",data);
}
close(fd[0]);

else
{
printf("Producer");
close(fd[0]);
for(int i=1;i<=5;i++)
{
data=i*10;
write(fd[1],&data,sizeof(data));
printf("produced %d\n",data);
}
close(fd[1]);
end=clock();
timetaken=(end-start)/CLOCKS_PER_SEC;
printf("communication time is %lf",timetaken);
communication_Ef = count / timetaken;
printf("Communication Efficiency = %lf\n",communication_Ef);
}
}
