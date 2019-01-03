/* Clearing stdin of extra characters. */
/* Using the fflush() function. */

#include <stdio.h>


int main()
{
    int age;
    char name[20];


    /* Prompt for user's age. */
    puts("Enter your age.");
    scanf("%d", &age);


    /* Clear stdin of any extra characters. */
    fflush(stdin);


    /* Now prompt for user's name. */
    puts("Enter your first name.");
    scanf("%s", name);

    /* Display the data. */
    printf("Your age is %d. \n", age);
    printf("Your age is %s. \n", name);

    return 0;
}
