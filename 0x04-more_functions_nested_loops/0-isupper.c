#include <stdio.h>

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check (ASCII value).
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char input;
	printf("Enter a character: ");
	scanf("%c", &input);

	if (_isupper(input))
		printf("The character is uppercase.\n");
	else
		printf("The character is not uppercase.\n");

	return 0;
}
