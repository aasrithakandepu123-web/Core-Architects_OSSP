#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int src, dest;
    char data[100];
    int bytes;

    src = open("source.txt", O_RDONLY);
    if (src == -1)
    {
        printf("Source file not found\n");
        return 1;
    }

    dest = open("destination.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    bytes = read(src, data, 100);
    write(dest, data, bytes);

    close(src);
    close(dest);

    printf("File copied successfully\n");

    return 0;
}
