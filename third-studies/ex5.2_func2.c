/* Illustrates the difference between arguments and parameters. */

#include <stdio.h>

/* Declaration of 3 float variables x, y, and z, two of them have been */
/* assigned a value. */
float x = 3.5, y = 65.11, z;

/* Forward declaration of function.*/
float half_of(float k);

/* Main body of the program.*/
int main()
{
    /* In this call, x is the argument to half_of(). */
    /* Storing the result of the half_of() function in z. */
    z = half_of(x);
    printf("The value of z = %f\n", z);

    /* Storing the result of the half_of() function in z. */
    z = half_of(y);
    printf("The value of z = %f\n", z);

    return 0;
}

float half_of(float k)
{
    /* k is the parameter. Each time half_of() is called, */
    /* k has the value that was passed as an argument. */

    return (k/2);
}
