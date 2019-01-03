/* Example of using more than one union member at a time. */

#include <stdio.h>

int main()
{
    union shared_tag
    {
        char c;
        int i;
        long l;
        float f;
        double d;
    } shared;

    shared.c = '$';

    printf("\nchar c   \t= %c", shared.c);
    printf("\nint i    \t= %d", shared.i);
    printf("\nlong l   \t= %ld", shared.l);
    printf("\nfloat f  \t= %f", shared.f);
    printf("\ndouble d \t= %f", shared.d);

    shared.d = 1223.243;

    printf("\nchar c   \t= %c", shared.c);
    printf("\nint i    \t= %d", shared.i);
    printf("\nlong l   \t= %ld", shared.l);
    printf("\nfloat f  \t= %f", shared.f);
    printf("\ndouble d \t= %f\n", shared.d);

    return 0;
}
