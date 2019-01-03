#include <stdio.h>


int return_division(int a, int b);
int return_product(int a, int b);


int main()
{
    printf("1st division is: %d\n", return_division(50, 10));
    printf("2nd division is: %d\n", return_division(50, 0));

    printf("1st multiplication is: %d\n", return_product(23, 3));
    printf("2nd multiplication is: %d\n", return_product(5, 9));
}


/* Calculating division. */
int return_division(int a, int b)
{
    if (b >= 1)
    {
        return a / b;
    }

    else
    {
        printf("cannot divide by 0\n");
        return 0;
    }
}


/* Calculating product. */
int return_product(int a, int b)
{
    return a * b;
}
