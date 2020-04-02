/*=====================================================================================
=--------------------Program useful to emulate a 100 sided die------------------------=
=====================================================================================*/
#include <stdio.h>
#include <stdlib.h> // Include the function srand
#include <time.h>

int main ()
{
   int  RandNumber, //Variable where a stock a randomly generated number.
        cptr=0,
        theChosenOne=0, //At the end of the program, i'll choose one cell from the chart.
        Stock_RandNumber[10]; //This is the chart in which is stored the randomly generated numbers.
   char continuer;

  /* initialize random seed always at the beginning of the program */
  srand (time(NULL));

   printf("Chart of random numbers in which it'll pick a number:\n");
  do
  {
     for(cptr=0;cptr<10;cptr++)
     {
         RandNumber = rand() % 100 + 1;
         printf("%d ", RandNumber);
         Stock_RandNumber[cptr]=RandNumber;
     }

      theChosenOne=rand() % 10; //Here to choose which number to pick randomly from the chart Stock_Rand_number.

      printf("\n\nThe random number picked is %d\n\n", Stock_RandNumber[theChosenOne]);

      printf("Continue ? (y/*) ");
      scanf(" %c", &continuer);
  }
  while(continuer == 'y');
}
