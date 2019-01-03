/* Demonstrates printer output. */

#include <stdio.h>

int main()
{
    float f = 2.0134;

    fprintf(stdprn, "\nThis message is printed.\r\n");
    fprintf(stdprn, "\nAnd now some numbers:\r\n");
    fprintf(stdprn, "\nThe square of %f is %f.", f, f*f);

    /* Send a form feed. */
    fprintf(stdprn, "\f");

    return 0;
}
