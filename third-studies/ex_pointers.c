#include <stdio.h>

int main()
{
    int *p_cost, cost;

    p_cost = &cost;

    *p_cost = 100; /* Indirect access. */
    printf("\ncost \t= %d", cost);

    cost = 50; /* Direct access. */
    printf("\ncost \t= %d", cost);

    printf("\ncost \t= %d\n", *p_cost);

    return 0;
}
