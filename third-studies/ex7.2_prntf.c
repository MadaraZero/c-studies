/* Demonstration using printf() to display numerical values. */

#include <stdio.h>

int a = 2, b = 10, c = 50, x, rate;
float f = 1.05, g = 25.5, h = -0.1;

int main()
{
    printf("\nDecimal values without tabs: %d %d %d", a, b, c);
    printf("\nDecimal values with tabs: \t%d \t%d \t%d", a, b, c);

    printf("\nThree floats on 1 line: \t%f\t%f\t%f", f, g, h);
    printf("\nThree floats on 3 line: \n\t%f\n\t%f\n\t%f", f, g, h);

    printf("\nThe rate is %f%%", f);
    printf("\nThe result of %f/%f = %f\n", g, f, (g / f));

    puts("Hi");
    puts("Hii");
    puts("Hiii");

    scanf("%d \n %d", &x, &rate);
    printf("x = %d\n", x);

    return 0;
}
