#include <stdio.h>
#include <unistd.h>
int main()
{
char buf[100];
int  n;
while (1){
printf("Enter a Command\n");
n=read(0,buf,100);
if(n <=0)
break;
if (buf[0] == 'H' &&
     buf[1] == 'e' &&
     buf[2] == 'l' &&
      buf[3] == 'l'  &&
     buf[4] == 'o' ){
printf("Exiting shell...\n");
break;
}
printf("Command received\n");
write(1, buf,n);
}
}
