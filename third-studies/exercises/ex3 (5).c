#include <stdio.h>
#include <stdlib.h>

int main()

#define SIZE 4

{
    char *str, *ptr;
    int count;

    str = malloc(SIZE * sizeof(char));

    if (str == NULL)
    {
        puts("Memory allocation error.");
        exit(1);
    }

    ptr = str;

    for (count = 97; count <= 99; count++)
    {
        *ptr++ = count;
    }

    *ptr = '\0';

    puts(str);

    return 0;
}
