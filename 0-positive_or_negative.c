#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to the variable n and
 *              prints whether the number is positive or negative.
 *
 * Return: 0 (Success)
 */
int main(void)
{
/* Set the seed for the random number generator */
srand(time(NULL));

/* Generate a random number between -100 and 100 */
int n = rand() % 201 - 100;

/* Print the generated number */
printf("The number: %d\n", n);

/* Check if the number is positive, negative, or zero */
if (n > 0)
{
printf("is positive\n");
}
else if (n < 0)
{
printf("is negative\n");
}
else
{
printf("is zero\n");
}
return (0);
} 




