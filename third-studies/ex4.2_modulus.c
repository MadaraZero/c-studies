/* Illustrates the modulus operator. */
/* Inputs a number of seconds, and converts to hours, */
/* minutes, abd seconds. */

#include <stdio.h>

/* Define constants */

#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600

unsigned seconds, minutes, hours, secs_left, mins_left;

int main()
{
  /* Input the number of seconds. */

  printf("Enter number of seconds (< 65000): ");
  scanf("%d", &seconds);
  // seconds = scanf("%d");

  hours = seconds / SECS_PER_HOUR;
  minutes = seconds / SECS_PER_MIN;
  mins_left = minutes % SECS_PER_MIN;
  secs_left = seconds % SECS_PER_MIN;

  printf("%u seconds is equal to ", seconds);
  printf("%u h : %u m : %u s\n", hours, mins_left, secs_left);

  return 0;
}
