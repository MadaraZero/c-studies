#include <stdio.h>

int main()
{
    int int_val;

    do
    {
        puts("Enter an even integer: ");
        scanf("%d", &int_val);

    }while ((int_val % 2) != 0);

    printf("your even integer = %d", int_val);

}
