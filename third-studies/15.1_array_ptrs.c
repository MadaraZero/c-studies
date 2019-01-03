/* Demonstrates pointers and multidimensional arrays. */

#include <stdio.h>

int multi[2][4];

int main()
{
    printf("\nmulti = %d", multi);
    printf("\nmulti[0] = %d", multi[0]);
    printf("\n&multi[0][0] = %d\n", &multi[0][0]);
    return(0);
}
