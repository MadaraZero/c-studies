/* Demonstrates the sizeof() operator. */

#include <stdio.h>

/* Declare several 100-element arrays. */
int intarray[100];
float floatarray[100];
double doublearray[100];

int main()
{
    /* Display the sizes of numeric data types. */

    printf("\nSize of int \t= %ld", sizeof(int));
    printf("\nSize of short \t= %ld", sizeof(short));
    printf("\nSize of long \t= %ld", sizeof(long));
    printf("\nSize of float \t= %ld", sizeof(float));
    printf("\nSize of double \t= %ld", sizeof(double));

    /* Display the sizes of the three arrays. */

    printf("\nSize of intarray = %ld bytes", sizeof(intarray));
    printf("\nSize of floatarray = %ld bytes", sizeof(floatarray));
    printf("\nSize of doublearray = %ld bytes\n", sizeof(doublearray));

    return 0;
}
