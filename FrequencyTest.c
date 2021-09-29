//Name: Rohini Paligadu
//Description: Generating 10000 numbers between 0 and 9 and counting the occurrence of each digit

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
  int list_number, random_number, amount_generated;
  time_t t;
  
   /* Intializes random number generator */
  srand ((unsigned) time (&t));
  
  for (list_number = 0; list_number < total_number; list_number++){
    counts[list_number] = 0;
  }
  
  for (amount_generated = 0; amount_generated <= total_generated; amount_generated++)
    {
      random_number = (int) (10.0 * rand () / (RAND_MAX + 1.0));
      counts[random_number]++;
    }
    
  for (list_number = 0; list_number < total_number; list_number++){
  printf ("%d occurs %f%%\n", list_number, ((counts[list_number] / ((float) total_generated))*100));
  }
  
  return (0);


}

