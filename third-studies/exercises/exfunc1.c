#include <stdio.h>

float will_return;
float do_it(char a, char b, char c);

int main()
{
    will_return = do_it('a', 'b', 'c');
    printf("The total float of a + b + c = %.2f", will_return);
}

float do_it(char a, char b, char c)
{
    float total = a + b + c;
    return total;
}
