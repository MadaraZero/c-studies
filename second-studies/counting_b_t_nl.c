#include <stdio.h>

// counting blanks, tabs, and newlines
// \t = tabs, \n = newlines, ' ' = blanks
main()
{
  int c, nl, blanks, tabs;

  nl = 0;
  blanks = 0;
  tabs = 0;

  while((c = getchar()) != EOF)
  {
    if (c == '\n' )
     ++nl;

    if (c == '\t' )
     ++tabs;

    if (c == ' ' )
     ++blanks;
  }
  printf("newlines:  %d\n", nl);
  printf("blanks  :  %d\n", blanks);
  printf("tabs    :  %d\n", tabs);
}
