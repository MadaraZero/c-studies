/* Function that takes two arrays and sums the total of each array, and then sums
   the total of boths those totals. */

#include <stdio.h>

#define A 6
#define B 4
#define END 564

/* Forward declaration */
int sumarrays(int a[], int b[]);


/* Main */
int main()
{
    int x[A] = {2, 2, 2, 2, 2, END};
    int y[B] = {3, 3, 3, END};
    int fr;

    printf("\nfunction returns \t= %d\n", fr = sumarrays(x, y));

    return 0;
}


/* Sumarrays function */
int sumarrays(int a[], int b[])
{
    int count;
    int total_a=0, total_b=0;

    for (count = 0; a[count] != END; count++)
    {
            total_a += a[count];
    }


    for (count = 0; b[count] != END; count++)
    {
        total_b += b[count];
    }

    return total_a + total_b;
}
