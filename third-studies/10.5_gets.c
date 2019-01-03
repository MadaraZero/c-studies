/* Demonstrates using gets() library function. */

#include <stdio.h>

/* Allocate a character array to hold input. */

char input[81];

int main()
{
    puts("Enter some text, then press Enter: ");
    fgets(input, 81, stdin);
    printf("You entered: %s\n", input);

    return 0;
}
