#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Parent Process ID: %d\n", getpid());
    printf("Parent's Parent Process ID: %d\n", getppid());

    return 0;
}
