#include <stdio.h>

#define IN 1     // inside a word
#define OUT 0    // outside a word

// count lines, words, and characters input
main()
{
  int c, nl, nw, nc, state;

  // since no word is being processed yet, the default state is OUT
  state = OUT;
  // sets the variables, nl, nw, nc to 0
  nl = nw = nc = 0;
  // while that states if c does-not equal to EOF execude (code...)
  while ((c = getchar()) != EOF) {
    // increment nc by 1
    ++nc;
    // if c equals '\n' increment nl by 1
    if (c == '\n')
        ++nl;
    // if any of these is True, then state is set to OUT
    if (c == ' ' || c == '\n' || c == '\t')
        state = OUT;
    // if none of the above is True, then it moves to this piece of code
    // that sets state to IN, and then, increments nw by 1
    // if any of the above is True, then script starts back at the beginning
    else if (state == OUT) {
        state = IN;
        ++nw;
    }
  }
  printf("new line :  %d\n", nl);
  printf("new word :  %d\n", nw);
  printf("new char :  %d\n", nc);
}
