/* Demonstrates basic pointer use. */

#include <stdio.h>

/* Declare and initialize an int variable. */
int var = 1;

/* Declare a pointer to int. */
int *ptr;

int main()
{
    /* Initialize ptr to point to var. */
    ptr = &var;

    /* Acce var directly and indirectly. */
    printf("\nDirect access, var = %d", var);
    printf("\nIndirect access, var = %d", *ptr);

    /* Display the adress of var two ways. */
    printf("\n\nThe adress of var = %p", &var);
    printf("\nThe adress of var = %p\n", ptr);

    return 0;
}
