#include <stdio.h>
#include <ctype.h>

// forward declarations
// int can_print_it(char ch);
void print_letters(char arg[]);


// Function 1
void print_arguments(int argc, char *argv[])
{
  int i = 0;

  for(i = 0; i < argc; i++){
    print_letters(argv[i]);
  }
}


// Function 2
void print_letters(char arg[])
{
  int i = 0;

  for(i = 0; arg[i] != '\0'; i++){
    char ch = arg[i];
    printf("'%c' == %d\n", ch, ch);

    // if(can_print_it(ch)) {
    //   printf("'%c' == %d\n", ch, ch);
    }
  }
  //printf("\n");



// Function 3
// int can_print_it(char ch)
// {
//   return isalpha(ch) || isblank(ch);
// }


// Function 4
int main(int argc, char *argv[])
{
  print_arguments(argc, argv);
  return 0;
}
