#include <stdio.h>
#include <stdlib.h>

int stuff[12][3];
int ctr, ctr_two, numb;

int main()
{
    for (ctr = 0; ctr < 12; ctr++)
    {
        for (ctr_two = 0; ctr_two < 3; ctr_two++)
        {
            numb = 0;
            stuff[ctr][ctr_two] = numb;
        }

    }

    for (ctr = 0; ctr < 12; ctr++)
    {
        for (ctr_two = 0; ctr_two < 3; ctr_two++)
        {
            printf("\nstuff[%d][%d] \t= %d", ctr, ctr_two, stuff[ctr][ctr_two]);
        }

    }
    return 0;
}
