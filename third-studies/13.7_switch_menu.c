/* Demonstrates using an infinite loop and the switch */
/* statement to implement a menu system. */

#include <stdio.h>
#include <stdlib.h>

#define DELAY 150000

/* Function prototypes. */
int menu(void);
void delay(void);

int main()
{
    while (1)
    {
        /* Get user's selection and branch based on the input. */
        switch(menu())
        {

            case 1:
                {
                    puts("\nExecuting choice 1");
                    delay();
                    break;
                }

            case 2:
                {
                    puts("\nExecuting choice 2");
                    delay();
                    break;
                }

            case 3:
                {
                    puts("\nExecuting choice 3");
                    delay();
                    break;
                }

            case 4:
                {
                    puts("\nExecuting choice 4");
                    delay();
                    break;
                }

            case 5:            /* Exit program. */
                {
                    puts("\nExiting program now...\n");
                    delay();
                    exit(0);
                }

            default:           /* Default case. */
                {
                    puts("\nInvalid choice, try again.");
                    delay();
                }
        } /* End of switch */
    } /* End of while */
} /* End of main */


/* Displays a menu and inputs user's selection. */
int menu(void)
{
    int reply;

    puts("\nEnter 1 for task A.");
    puts("Enter 2 for task B.");
    puts("Enter 3 for task C.");
    puts("Enter 4 for task D.");
    puts("Enter 5 to exit program.");

    scanf("%d", &reply);

    return reply;
}


/* Delays the program by 150,000 microseconds before continuing to execute. */
void delay(void)
{
    long x;
    for (x = 0; x < DELAY; x++)
        ;
}
