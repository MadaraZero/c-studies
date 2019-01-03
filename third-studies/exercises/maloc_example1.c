#include <stdlib.h>
#include <stdio.h>
int main()
{
    /* allocate memory for a 100-character string. */
    char *str;
    if ((str = (char *) malloc(100)) == NULL)
    {
        printf("Not enough memory to allocate buffer\n");
        exit(1);
    }
    printf("String was allocated!");
    return 0;
}
