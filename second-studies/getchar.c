#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
  int c;                         // a variable c that is an integer type

  while ((c = getchar()) != EOF) // While input is not equal to EOF i.e. -1
    putchar(c);                  // print char

}
