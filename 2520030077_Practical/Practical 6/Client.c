#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main()
{
int fd1, fd2;
char msg[100];
char response[100];
fd1 = open("client_to_server", O_WRONLY);
printf("Enter message: ");
scanf("%s", msg);
write(fd1, msg, sizeof(msg));
close(fd1);
fd2=open("server_to_client", O_RDONLY);
read(fd2, response, sizeof(response));
printf("Server: %s\n", response);

close(fd2);
return 0;
}



