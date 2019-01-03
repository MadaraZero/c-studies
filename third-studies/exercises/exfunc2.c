#include <stdio.h>

int return_product(int a, int b);

int product;

int main()
{
    product = return_product(2, 5);
    printf("prduct is: %d\n", product);
}

int return_product(int a, int b)
{
    return a * b;
}
