/* Demonstrates putchar(). */

#include <stdio.h>

int main()
{
    int count;

    for (count = 14; count < 128; )
        putchar(count++);

    return 0;
}
