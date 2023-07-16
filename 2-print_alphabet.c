#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase
 * using the putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';  /* Start with lowercase 'a' */

	while (letter <= 'z')  /* Loop until lowercase 'z' */
	{
		putchar(letter);  /* Print the current letter */
		letter++;  /* Move to the next letter */
	}

	putchar('\n');  /* Print a new line */

	return (0);
}
