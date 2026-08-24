#include <stdio.h>
#include <string.h>

int main()
{
    char command[50];

    while (1)
    {
        printf("Enter a Command\n");
        scanf("%s", command);

        if (strcmp(command, "exit") == 0)
        {
            printf("Exiting shell...\n");
            break;
        }

        printf("  Command received\n");
        printf("%s\n", command);
    }

    return 0;
}
