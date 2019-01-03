#include <stdio.h>

int main()
{
    int x;
    int tally = 0;

    for (x = 1; x < 3489346; x++)
    {
        if (x % 2 == 0)
        tally++;
        printf("%d = even\n", x);
    }
    printf("There are %d even numbers.\n", tally);
    return 0;
}
