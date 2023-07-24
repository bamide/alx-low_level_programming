#include <stdio.h>

/**
 * _isalpha - checks if a character is an alphabetic character.
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise.
 */
int _isalpha(int c)
{
	/* Check if the character is an uppercase letter (A-Z) */
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}

	/* Check if the character is a lowercase letter (a-z) */
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}

	/* If the character is not a letter, return 0 */
	return 0;
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	printf("Enter a character: ");
	scanf("%c", &ch);

	if (_isalpha(ch))
	{
		printf("The character is an alphabetic character.\n");
	}
	else
	{
		printf("The character is not an alphabetic character.\n");
	}

	return 0;
}
