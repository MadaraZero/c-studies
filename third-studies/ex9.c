/* Function that takes two arrays and sums the total of each array, and then sums
   the total of boths those totals. */

/* [2, 2, 2,] + [2, 2, 2] = [4, 4, 4]*/

#include <stdio.h>

#define A 4
#define END -333


/* Forward declarations */
int * addarrays(int a[], int b[]);

/* Arrays */
int ar_a[A] = {2, 2, 2, END};
int ar_b[A] = {2, 2, 2, END};

int main()
{
    int *fr, count;
    fr = addarrays(ar_a, ar_b);

    puts("\n1st array \t2nd array \t3rd array");
    puts("=========================================");

    for (count = 0; ar_a[count] != END; count++)
    {
        printf("\nar_a[%d] + \tar_b[%d] \tar_c[%d]\n",
                ar_a[count], ar_b[count], fr[count]);
    }

    puts("=========================================");

    return 0;
}

int *addarrays(int a[], int b[])
{
    int count, *p_ar_c;
    int static ar_c[A];

    ar_c[A-1] = END;

    p_ar_c = ar_c;

    for (count = 0; a[count] != END; count++)
    {
        ar_c[count] = (a[count] + b[count]);
    }

    return p_ar_c;
}
