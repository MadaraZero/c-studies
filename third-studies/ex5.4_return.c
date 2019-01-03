/* Demonstrates using multiple return statements in a function. */

#include <stdio.h>

int x, y, z;

int larger_of(int, int);

int main()
{
    puts("Enter two different integer values: ");
    scanf("%d%d", &x, &y);

    z = larger_of(x, y);

    printf("\nThe larger value is %d.", z);

    return 0;
}

int larger_of(int a, int b)
{
    int correct = 0;
    if (a > b)
        correct = 1;
    else
        correct = 2;

    if (correct == 1) {
        return a;
    }

    else if (correct == 2) {
        printf("b is larger than a");
    }
}
