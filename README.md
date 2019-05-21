# Random_Number_Generator

A challenge!
That little program was a bit challenging because the function time.h i used to generate a random number based the generation on the 
cumputer clock (using it it as a seed) and, more precisely, on the seconds. So i was only able to generate a different number every second.
To solve that problem, i stock every number (10) generated with "randNumber = rand() % 100 + 1;" in a integer chart.
Finally, i pick randomly a number in that chart and i get a pretty cool random number generator to emulate a 100 sided dice. :)

# What did i learn?
* I learned how to use a "for" in C.
* A learn how to generate a random number, as i said earlier. ;)
* I used a "do ... while();" to ask the user if he wants to activated the program again.
* I learn how to use a chart and the problem linked to it due to the conception of chart in C program language. 
* Using srand (time(NULL)); and rand() from time.h.

** Don't hesitate to use that program or to transform it into a function to pick cells in a chart randomly for a game or to emulate a dice.
It won't be too hard to get other type of dice, you only need to modify the %100 in the "randNumber = rand() % 100 + 1;"

A six sided dice ? ==> use modulo 6 like ==> "randNumber = rand() % 6 + 1;" ;)
