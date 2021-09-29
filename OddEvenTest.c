//Name: Rohini Paligadu
//Description: Generating 10000 numbers between 0 and 9 and counting the occurrence of odd and even numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main ()
{
  //declare and initialise variables
  int counts[10];
  int total_number = 10;
  int total_generated = 10000;
  int list_number, random_number, amount_generated, even_count =
    0, odd_count = 0;
  float freq_even, freq_odd;
  time_t t;

  /* Intializes random number generator */
  srand ((unsigned) time (&t));

  for (list_number = 0; list_number < total_number; list_number++)
    {
      counts[list_number] = 0;
    }

  for (amount_generated = 0; amount_generated <= total_generated;
       amount_generated++)
    {
      random_number = (int) (10.0 * rand () / (RAND_MAX + 1.0));
      counts[random_number]++;
    }

  for (list_number = 0; list_number < total_number; list_number++)
    {
      if (counts[list_number] % 2 == 0)
	{
	  even_count++;
	}
      else
	{
	  odd_count++;
	}

    }

  printf ("Even numbers occur by %0.2f%%\n", (even_count/(double) list_number)*100.0);
  printf ("Odd numbers occur by %0.2f%%", (odd_count/(double) list_number)*100.0);

  return 0;


}


