//Name: Rohini Paligadu
//Description: Generating 10000 pairs of random numbers and counting frequency of pairs of digits


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main ()
{

  //initialise and declare variables
  int i, j, list, total = 100, row = 10000, col = 2, occurrence[100];
  time_t t;

  /* Intializes random number generator */
  srand ((unsigned) time (&t));

  for (list = 0; list < total; list++)
    {

      occurrence[list] = 0;

    }

//Generate 2D matrix of random numbers
  for (i = 0; i < row; i++)
    {
      for (j = 0; j < col; j++)
	{
	  int random_number = (int) (100.0 * rand () / (RAND_MAX + 1.0));
	  //printf ("%02d ", random_number);
	  occurrence[random_number]++;
	}
      //printf ("\n");
    }

//Count occurrence of each digit
  for (list = 0; list < total; list++)
    {

      printf ("%02d occurs %0.2f%%\n", list,
	      ((occurrence[list] / ((float) row)) * 100));
    }



  return 0;

}

