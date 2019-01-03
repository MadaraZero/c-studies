/* Demonstrates nested while statements. */

#include <stdio.h>

/* Array of integers of length 5. */
int array[5];


/* Main body. */
int main()
{
    int ctr = 0, nbr = 0; /* Declaration of two int type variables. */


    printf("This program prompts you to enter 5 numbers\n");
    printf("Each number should be from 1 to 10\n");

    /* While ctr is less than 5... execute. */
    while (ctr < 5)
    {
        /* Int variable assigned to 0. */
        nbr = 0;
        while (nbr < 1 || nbr > 10) /* T or F = T is the case ... execute. */
        {
            printf("\nEnter number %d of 5: ", ctr + 1);
            scanf("%d", &nbr);
        }
        array[ctr] = nbr; /* Adds the user input nbr to the array with index ctr.*/
        ctr++;            /* Increments ctr.*/
    }
    for (ctr = 0; ctr < 5; ctr++)
        printf("Value %d is %d\n", ctr + 1, array[ctr]);

    return 0;
}
