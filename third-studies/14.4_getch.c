/* <conio.h> header file doesn't work. */
/* Demonstrates the getch() function. */
/* Non -ANSI code */

#include <stdio.h>
#include <conio.h>

int main()
{
    int ch;

    while ((ch = getch()) != '\r')
    {
        putchar(ch);
    }
    return 0;
}
