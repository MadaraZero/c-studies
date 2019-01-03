#include <stdio.h>

// bount a, b, and b.
main()
{
  int input, ca, cb, cc;
  ca = 0;
  cb = 0;
  cc = 0;

  char a[1] = {'a'};
  char b[1] = {'b'};
  char c[1] = {'c'};

  printf(a);

  while((input = getchar()) != EOF)
  {
    if (input == a )
     ++ca;

    if (input == b )
     ++cb;

    if (input == c )
     ++cc;
  }
  printf("a : %d\n", ca);
  printf("b : %d\n", cb);
  printf("c : %d\n", cc);
}
