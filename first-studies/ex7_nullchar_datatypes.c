#include <stdio.h>

int main(int argc, char *argv[])
{
  // declaration of an int and double variable with data 100 and 1.2
  int bugs = 100;
  double bug_rate = 1.2;

  // print out the previous variables as usual
  printf("You have %d bugs at the imaginary rate of %f.\n",
          bugs, bug_rate);

  // declaration of a variable that has a long number
  long universe_of_defects = 1L * 1024L * 1024L * 1024L;

  unsigned long er_unsig_long = 4294967L * 1002L;
  signed long er_sig_long = 4294967L * 1002L;
  unsigned long unsig_long = 4294967L * 500L;
  signed long sig_long = 4294967L * 100L;

  printf("Too big unsigned l integer: %ld\n", er_unsig_long);
  printf("Too big signed l integer: %ld\n", er_sig_long);
  printf("Proper size l unisgned integer: %ld\n", unsig_long);
  printf("Proper size l signed integer: %ld\n", sig_long);

  // print out the long number with an %ld format adding 'l'
  // that stands for long to the d% format code
  printf("The entire universe has %ld bugs.\n",
          universe_of_defects);

  //
  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs.\n",
          expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the universe.\n",
          part_of_universe);

  // this makes no sense, just a demo of something weird
  // a char with a special syntax '\0' which creates a nul byte character
  // which is, in essence, the number 0
  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;
  printf("Which means you should care %d%%.\n",
          care_percentage);

  return 0;
}
