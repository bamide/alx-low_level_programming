#include <stdio.h>

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c) 
{
{
	/* Check if the ASCII value of c corresponds to a lowercase character */
	return (c >= 'a' && c <= 'z') ? 1 : 0;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	printf("Enter a character: ");
	scanf("%c", &ch);

	if (_islower(ch))
	{
		printf("The character '%c' is lowercase.\n", ch);
	}
	else
	{
		printf("The character '%c' is not lowercase.\n", ch);
	}

	return 0;
}
}
