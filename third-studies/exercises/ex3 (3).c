#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eightyeight[88];
    int ctr, numb;

    for (ctr = 0; ctr < 88; ctr++)
    {
        numb = rand();
        eightyeight[ctr] = numb;
        printf("eightyeight[%ld] = %ld\n", ctr, numb);
    }
    return 0;
}
