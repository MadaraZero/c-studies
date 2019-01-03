#include <stdio.h>

int main()
{

  // Warning: On Some systems you may have to change the
  // %ld in this code to a %u since it will use unsigned ints
  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of a float: %ld\n", sizeof(float));
  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of a double: %ld\n", sizeof(double));

  return 0;
}
