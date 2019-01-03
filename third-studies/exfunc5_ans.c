/* This is a program with a recursive function that calculates exponents. */
#include <stdio.h>

int three_powered(int power);

int main()
{
    int a = 4;
    int b = 9;
    printf("\n3 to the power of %d is %d\n", a, three_powered(a));
    printf("\n3 to the power of %d is %d\n", b, three_powered(b));
    return 0;
}

int three_powered(int power)
{
    if (power < 1)
        return(1);

    else
        printf("Power = %d\n", power);
        return (3 * three_powered(power - 1));
}
