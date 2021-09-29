//Name: Rohini Paligadu
//Description: Generating 1000 random numbers between 0 and 9 and finding the mean value

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main ()
{
  //declaring variables
  int max_number = 1000;
  int amount, random_number, num_array[max_number];
  float sum_numbers, average;
  time_t t;

  /* Intializes random number generator */
  srand ((unsigned) time (&t));

  for (amount = 0; amount <= max_number; amount++)
    {
      random_number = (int) (10.0 * rand () / (RAND_MAX + 1.0));
      num_array[amount] = random_number;
      sum_numbers += (float) num_array[amount];
      //printf ("%d\n", random_number);
      average = (float) sum_numbers/amount;

    }

  printf ("The sum is %f\n", sum_numbers);
  printf ("The mean is %f", average);

  return 0;

}



