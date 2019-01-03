#include <stdio.h>

int main()
{
    int x, y, ctr_x=0;

    for (x = 0; x < 10; x++)
    {
        for (y = 5; y > 0; y--)
        {
            printf("x");
            ctr_x++;
        }
        printf("\n");
    }
    printf("Amount of X's printed is %d\n", ctr_x);
    return 0;
}
