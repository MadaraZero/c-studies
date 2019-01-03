/* Exercise 3 */

#include <stdio.h>

int main()
{
    struct data
    {
        int x;
        float y;
        float z;
    };

    struct data info =
    {
        100,
        123.5,
        23.5552
    };

    printf("\n%d\t%f\t%f\n", info.x, info.y, info.z);

    return 0;
}
