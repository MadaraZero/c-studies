
#include <stdio.h>
int array[10];
int x=1;

int main()
{
    for (x = 1; x <= 10; x++)
    {
        printf("%d\n", x);
        array[x] = 99;
    }
    return 0;
}
