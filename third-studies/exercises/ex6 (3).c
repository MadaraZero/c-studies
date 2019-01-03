#include <stdio.h>
#include <stdlib.h>

#define SIZE_A 4
#define SIZE_B 5

char *biggest_array(char a[], char b[], int x, int y);

int main()
{
    int size, n;
    char *fr;
    char ar_a[SIZE_A] = {'a', 'b', 'c', '\0'};
    char ar_b[SIZE_B] = {'a', 'b', 'c', 'd', '\0'};

    fr = biggest_array(ar_a, ar_b, SIZE_A, SIZE_B);

    if (SIZE_A > SIZE_B)
    {
        size = SIZE_A;
    }
    else
    {
        size = SIZE_B;
    }

    puts("Largest array: ");

    for (n = 0; n  < (size-1); n++)
    {
        printf("array[%d] \t= %c\n", n, *fr++);

    }
    return 0;
}

char *biggest_array(char first[], char second[], int length_a, int length_b)
{
    char *first_ptr, *second_ptr;

    first_ptr = first;
    second_ptr = second;

    if (length_a > length_b)
    {
        return first_ptr;
    }
    else
    {
        return second_ptr;
    }
}
