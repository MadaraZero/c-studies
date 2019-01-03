#include <stdio.h>

// #define RADIUS 3.14F

int main()
{
    float *p_radius, radius=3.14;

    p_radius = &radius;

    printf("\nmy pointer \t= %.2f", *p_radius);

    return 0;
}
