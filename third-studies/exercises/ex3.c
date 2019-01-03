#include <stdio.h>


int main()
{
    int ctr;

    ctr = 0;
    puts("--For Loop-----------------------------------");
    for (; ctr <= 100; ctr+=3)
    {
        printf("Count: %d, ", ctr);
    }


    ctr = 0;
    puts("\n\n--While loop-----------------------------------");
    while (ctr <= 100)
    {
        printf("Count: %d, ", ctr);
        ctr+=3;
    }


    ctr = 0;
    puts("\n\n--Do While-----------------------------------");
    do
    {
        printf("Count: %d, ", ctr);
        ctr+=3;
    }
    while (ctr <= 100);

    return 0;
}
