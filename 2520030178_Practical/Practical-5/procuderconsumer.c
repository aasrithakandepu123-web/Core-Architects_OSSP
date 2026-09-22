#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main(){
int fd[2];
pipe(fd);
int pid,data,start,end;//declaring data and pid
double timetaken;
pid = fork();
start = clock();
if(pid==0){//checking for child
printf("Consumer \n");
close(fd[1]);//close the write end of the pipe since, child is reading
for(int i =0; i<5;i++){//creating 5 consumers
read(fd[0], &data, sizeof(data));//child is reading data from pipe
printf("Consumed %d\n", data);//printing the data consumed
}
close(fd[0]);//closing read  end of the pipe
}
else{
printf("Producer ");
close(fd[0]);//closing read end of the pipe
for(int i =1;i<=5;i++){
data = i*10;
write(fd[1],&data,sizeof(data));//writing the data in pipe
printf("Producer %d\n",data);
}
close(fd[1]);//closing read end of the pipe
end=clock();
timetaken = (double)(end-start)/CLOCKS_PER_SEC;
printf("Time Taken is %f\n", timetaken);
double eff=(5/timetaken);
printf("efficiency of communication = %f\n",eff);
}
}
