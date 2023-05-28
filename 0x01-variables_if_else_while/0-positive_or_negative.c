#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
#include <stdio.h>
/** 
*main - Determines if a number is positive,negative or zero
*Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{	
printf("%d is negative\n", n);
}
return (0);
}

=======
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
>>>>>>> 2ec670c2b55b1ed10da0ba5981873cd4995ed1bd
