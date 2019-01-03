#include <stdio.h>
#include <string.h>

// Visually represent length of word throug histrogram
main()
{
  int c, i, nother, nonchar;
  nonchar = 0;
  nother = 0;
  char bar = '|';


  while ((c = getchar()) != EOF) {
    while ((c = getchar()) != '\n'){
      if (c == ' ' || c == '\n' || c == '\t')
        ++nonchar;
      else
        ++nother;
      for (i = 0; i < nother; ++i){
        printf("%c", bar);
      }

      }

  //printf("\n");
  //nother = 0;
  printf("nother:%d\n i: %d", nother, i);
  nother = 0;
  }
}
