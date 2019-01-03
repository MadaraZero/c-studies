#include <stdio.h>

// count characters in input; 2nd version
main()
{
  // a variable called nc that is a long integer
  double nc;

  // for-loop nc = 0; getchar() that is not equal to EOF; increment nc by 1.
  for (nc = 0; getchar() != EOF; ++nc)
      ;
  // print (nc minus 1) formatted as a float with 0 decimals.
  printf("%.0f\n", (nc-1));
}
