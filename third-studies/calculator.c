/* A calculator with addition, subtraction, multiplication, and division. */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

/* Function prototypes. */
int menu(void);
float addition(void);
float subtraction(void);
float division(void;
float multiplication(void);


int main()
{


    while (1)
    {
        /* Get user's selection and branch based on the input. */
        switch(menu())
        {

            case 1:
                {
                    puts("\nExecuting addition...");
                    addition();
                    break;
                }

            case 2:
                {
                    puts("\nExecuting subtraction...");
                    subtracation();
                    break;
                }

            case 3:
                {
                    puts("\nExecuting division...");
                    division();
                    break;
                }

            case 4:
                {
                    puts("\nExecuting multiplication...");
                    multiplication();
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
int menu(void)
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
float addition(void)
{
    float a, b;
    scanf("%f + %f", &a, &b);

    return a + b;
}


/* Functions that returns a - b. */
float subtraction(void)
{
    float a, b;
    scanf("%f - %f", &a, &b);

    return a - b;
}


/* Functions that returns a / b. */
float division(void)
{
    float a, b;
    scanf("%f / %f", &a, &b);

    return a / b;
}


/* Functions that returns a * b. */
float multiplication(void)
{
    float a * b;
    scanf("%f x %f", &a, &b);

    return a * b;
}
