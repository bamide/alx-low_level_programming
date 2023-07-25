#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	/* Iterate through the string until the null terminator is encountered */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
