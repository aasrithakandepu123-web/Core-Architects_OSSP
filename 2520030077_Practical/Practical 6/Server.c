#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

int main()
{
    int fd1, fd2;
    char msg[100];
    char response[100];

    mkfifo("client_to_server", 0666);
    mkfifo("server_to_client", 0666);
     printf("Server started...\n");
    fd1 = open("client_to_server", O_RDONLY);

    read(fd1, msg, sizeof(msg));
    printf("Client message: %s\n", msg);

    close(fd1);

    strcpy(response, "Message received");

    fd2 = open("server_to_client", O_WRONLY);
    write(fd2, response, sizeof(response));

    close(fd2);

    return 0;
}
