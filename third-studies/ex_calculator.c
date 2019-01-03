/**************************************************
 * ex_calculator.c
 *
 * Denis N. Matei
 *
 * A calculator that can do addition, subtraction,
 * multiplication, and division.
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

/* Function prototypes. */
int menu();
float addition(float a, float b);
float subtraction(float a, float b);
float division(float a, float b);
float multiplication(float a, float b);


int main()
{
    float x, y, calc_result;

    while (1)
    {
        /* Get user's selection and branch based on the input. */
        switch(menu())
        {

            case 1:
                {
                    puts("\nExecuting addition...");

                    scanf("%f", &x);
                    puts("+");
                    scanf("%f", &y);
                    calc_result = addition(x, y);
                    printf("\n%.2f + %.2f = %.2f\n", x, y, calc_result);
                    break;
                }

            case 2:
                {
                    puts("\nExecuting subtraction...");
                    scanf("%f", &x);
                    puts("-");
                    scanf("%f", &y);
                    calc_result = subtraction(x, y);
                    printf("\n%.2f + %.2f = %.2f\n", x, y, calc_result);
                    break;
                }

            case 3:
                {
                    puts("\nExecuting division...");
                    scanf("%f", &x);
                    puts("/");
                    scanf("%f", &y);
                    calc_result = division(x, y);
                    printf("\n%.2f + %.2f = %.2f\n", x, y, calc_result);
                    break;
                }

            case 4:
                {
                    puts("\nExecuting multiplication...");
                    scanf("%f", &x);
                    puts("x");
                    scanf("%f", &y);
                    calc_result = multiplication(x, y);
                    printf("\n%.2f + %.2f = %.2f\n", x, y, calc_result);
                    break;
                }

            case 5:            /* Exit program. */
                {
                    puts("\nExiting program now...\n");
                    exit(0);
                }

            default:           /* Default case. */
                {
                    puts("\nInvalid choice, try again.");
                }
        } /* End of switch */
    } /* End of while */
} /* End of main */


/* Displays a menu and inputs user's selection. */
int menu()
{
    int menu_selection;

    puts("\nEnter 1 for addition.");
    puts("Enter 2 for subtraction.");
    puts("Enter 3 for division.");
    puts("Enter 4 for multiplication.");
    puts("Enter 5 to exit program.");

    scanf("%d", &menu_selection);

    return menu_selection;
}


/* Functions that returns a + b. */
float addition(float a, float b)
{
    return (a + b);
}


/* Functions that returns a - b. */
float subtraction(float a, float b)
{
    return (a - b);
}


/* Functions that returns a / b. */
float division(float a, float b)
{
    return (a / b);
}


/* Functions that returns a * b. */
float multiplication(float a, float b)
{
    return (a * b);
}
