#include <stdio.h>

int radius, area;

int main()
{
  printf("Enter radius (e.g. 10): ");
  scanf("%d", &radius);
  area = (int) (3.14159 * radius * radius);
  printf("\n\narea = %d\n", area);
  return 0;
}
