#include <stdio.h>


/* Forward declarations. */
float a, b, c, d, e, user_input;
float average_float(float, float, float, float, float);


/* Main body of the program. */
int main()
{
    puts("Enter 5 floating point numbers: ");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    user_input = average_float(a, b, c, d, e);

    printf("The average of the 5 floating point numbers is %.2f", user_input);

    return 0;
}


/* Calculate average of 5 floating point numbers. */
float average_float(float a, float b, float c, float d, float e)
{
    return (a + b + c + d + e) / 5;
}
