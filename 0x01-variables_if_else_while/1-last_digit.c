#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Description: Generates a random number and prints the last digit along with
 *              a specific message based on its value.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    int n;
    int last_digit;

    srand(time(0)); /* Seed the random number generator with the current time */

    /* Generate a random number between 0 and RAND_MAX */
    n = rand();

    /* Extract the last digit of n */
    last_digit = n % 10;

    /* Print the result based on the last digit */
    printf("The string Last digit of %d is ", n);

    if (last_digit > 5)
        printf("and is greater than 5\n");
    else if (last_digit == 0)
        printf("and is 0\n");
    else
        printf("and is less than 6 and not 0\n");

    return (0);
}
