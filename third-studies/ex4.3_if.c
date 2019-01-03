/* Demonstrates the use of if statements */
#include <stdio.h>

int x, y;

int main()
{
    /* Input the two values to be tested */

    printf("\nInput an Integer value for x: ");
    scanf("%d", &x);
    printf("\nInput an Integer value for y: ");
    scanf("%d", &y);

    /* Test values and print result */

    if (x == y)
        printf("x is equal to y\n");

    if (x > y)
        printf("x is greater than y\n");

    if (x < y)
        printf("x is smaller than y\n");

    return 0;
}
