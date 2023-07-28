#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @input: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *input)
{
	char *output;
	int i, c;

	output = (char *)malloc(strlen(input) + 1);
	if (!output)
	{
		printf("Memory allocation error!\n");
		return (NULL);
	}

	for (i = 0; input[i] != '\0'; i++)
	{
		c = input[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			if (c >= 'A' && c <= 'Z')
				output[i] = ((c - 'A' + 13) % 26) + 'A';
			else
				output[i] = ((c - 'a' + 13) % 26) + 'a';
		}
		else
		{
			output[i] = c;
		}
	}
	output[i] = '\0';

	return (output);
}
