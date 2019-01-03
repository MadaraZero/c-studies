/* Illustrates variable scope. */

#include <stdio.h>

void print_value(int a);

int main()
{
    static int x = 999;

    printf("%d\n", x);
    print_value(x);
    return 0;
}

void print_value(int a)
{
    printf("%d\n", a);
}
