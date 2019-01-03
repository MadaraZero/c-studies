/* Code that will calculate the cheapest way of shipping packages based on their
weight. Options are Premium shipping, ground shipping, and Drone shipping. */

#include <stdio.h>

#define METHOD_1 125.0  /* This is the premium shipping price. */

/* Forward declaration. */
float ground_shipping(float weight);
float drone_shipping(float weight);
float cheapest_shipping(float weight);


/* main() function.*/
float main(void)
{
  float output_5 = cheapest_shipping(50.0);
}


/* Ground shipping. */
float ground_shipping(float weight)
{
  float cost = 20.0;

  if(weight <= 2.0) {
    cost += (weight * 1.50);
  }
  else if(weight > 2.0 && weight <= 6.0) {
    cost += (weight * 3.00);
  }
  else if(weight > 6.0 && weight <= 10.0) {
    cost += (weight * 4.00);
  }
  else if(weight > 10.0) {
    cost += (weight * 4.75);
  }
  return cost;
}


/* Drone shipping. */
float drone_shipping(float weight)
{
  float cost = 0.0;
  if(weight <= 2.0) {
    cost += (weight * 4.50);
  }
  else if(weight > 2.0 && weight <= 6.0) {
    cost += (weight * 9.00);
  }
  else if(weight > 6.0 && weight <= 10.0) {
    cost += (weight * 12.00);
  }
  else if(weight > 10.0) {
    cost += (weight * 14.25);
  }
  return cost;
}


/* Compare shipping methods to find the cheapest method. */
float cheapest_shipping(float weight)
{
  /* METHOD_1 is a constant variable. */
  float method_2 = ground_shipping(weight);
  float method_3 = drone_shipping(weight);

  /* Compare whether METHOD_1 is cheaper than method_2 and method_3. */
  if(METHOD_1 < method_2 && METHOD_1 < method_3) {
    printf("\nPremium ground shipping is the cheapest at $%.2f\n", METHOD_1);
  }

  /* Compare whether method_2 is cheaper than METHOD_1  and method_3. */
  else if(method_2 < METHOD_1 && method_2 < method_3) {
    printf("\nRegular ground shipping is the cheapest at $%.2f\n", method_2);
  }

  /* Compare whether method_3 is cheaper than METHOD_1 and method_3. */
  else if(method_3 < METHOD_1 && method_3 < method_2) {
    printf("\nPremium ground shipping is the cheapest at $%.2f\n", method_3);
  }
}
