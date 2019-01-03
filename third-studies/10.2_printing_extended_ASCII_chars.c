/* Demonstrates printing extended ASCII characters. */

#include <stdio.h>

unsigned char x; /* Must be unsigned for extended ASCII. */

int main()
{
    /* Print extended ASCII characters 180 through 203. */

    for (x = 180; x < 204; x++)
    {
        printf("ASCII code %d is character %c\n", x, x);
    }

    x = 186;

    printf("%c\n", x);

    return 0;
}
