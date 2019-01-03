#include <stdio.h>


/* Forward declarations. */
int a, b, user_input;
int power_off_three(int total, int exponent);


/* Main body of the program. */
int main()
{
    puts("Enter a two numbers: ");
    scanf("%d%d", &a, &b);

    user_input = power_off_three(a, b);

    printf("%d to the power of %d is %d ", a, b, user_input);

    return 0;
}


/* Take a number to the power nth. */
int power_off_three(int total, int exponent)
{
    int i = 0;
    int exponent_count = power_off_three(0, exponent);

    while (i < exponent_count)
        {
            total *= (power_off_three(total, exponent) - exponent);
            i++;
        }

    return total + (exponent-1);
}
