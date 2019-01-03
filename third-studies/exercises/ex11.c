#include <stdio.h>

int main()
{
    int left=10, total=0, number_input;

    while (left != 0) {

        printf("%d more to go.\n", left);
        puts("Enter a number:");
        scanf("%d", &number_input);
        total += number_input;
        left--;
    }
    printf("Sum = %d", total);

}
