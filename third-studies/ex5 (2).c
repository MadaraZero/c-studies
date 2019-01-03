/* Bug Buster */

#include <stdio.h>

int x, y;
int array[10][3];
int main()
{
    for (x = 0; x < 10; x++)
    {
        for (y = 0; y < 3; y++)
        array[x][y] = 0;
    }
    printf("%d", array[4][1]);
    return 0;
}
