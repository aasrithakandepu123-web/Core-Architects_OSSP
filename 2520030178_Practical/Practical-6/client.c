#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#define FIFO1 "client_to_server"
#define FIFO2 "server_to_client"

int main()
{
    char message[100];
    char response[100];

    int fd1, fd2;

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    fd1 = open(FIFO1, O_WRONLY);
    write(fd1, message, strlen(message) + 1);
    close(fd1);

    fd2 = open(FIFO2, O_RDONLY);
    read(fd2, response, sizeof(response));

    printf("Server response: %s\n", response);

    close(fd2);

    return 0;
}
