/* Exercise 5 */

#include <stdio.h>

int main()
{
    struct data
    {
        int x;
        float y;
        float z;
    };

    struct data info[1] =
    {
        100,
        123.5,
        23.5552
    };

    printf("\n%d\t%f\t%f\n", info[0].x, info[0].y, info[0].z);

    struct data *p_data;
    p_data = info;

    printf("\n%d\t%f\t%f\n", p_data -> x, p_data -> y, p_data -> z);

    p_data -> y = 5.5;

    printf("info.y = \t%.1f", p_data -> y);

    return 0;
}
