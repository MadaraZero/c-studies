#include <stdio.h>

// count lines in input
main()
{
  // two variables of the integer type
  int c, nl;

  // nl equals 0
  nl = 0;
  // while the variable c which is getchar() is not equal to EOF execute:
  while((c = getchar()) != EOF)
      // if c is equal to \n i.e. new line, increment nl by 1 written as ++nl
      if (c == '\n') // '\n' actually represents an integer, in this case, 10
          ++nl;      // In ASCII, for example, 'A' is the integer 65
  // print nl formated on a new-line i.e. the amount of lines used.
  printf("%d\n", nl);
}
