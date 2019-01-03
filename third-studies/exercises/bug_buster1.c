#include <stdio.h>

int main()
{
    int ctr1;

    for (ctr1 = 0; ctr1 < 25; ctr1++)
        printf("*");
    puts("\nThis is sample function");

    {
        int ctr2;
        char star = '*';

        puts("\nIt has a problem\n");

        for (ctr2 = 0; ctr2 < 25; ctr2++)
        {
            printf("%c", star);
        }
    }
    return 0;
}
