#include <stdio.h>

int main()
{
    int c;
    char a, b;

    puts("Write char, integer, char");
    scanf("%c \n %d \n %c", &a, &c, &b);
    printf("\n\t char = %c \t integer = %d \t char = %c", a, c, b);

    return 0;
}
