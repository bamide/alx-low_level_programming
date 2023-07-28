#include <stdio.h>
#include <stdlib.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Return: A newly allocated string containing the encoded version
 *         of the original string.
 */
char *leet(char *str)
{
	if (str == NULL)
		return NULL;

	char *encoded_str = (char *)malloc(strlen(str) + 1);
	if (encoded_str == NULL)
		return NULL;

	int i, j;
	char leet_map[] = {'4', '3', '0', '7', '1'};
	char original_letters[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		encoded_str[j] = str[i];

		if ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t'))
			continue;

		for (int k = 0; k < 5; k++)
		{
			if (str[i] == original_letters[k] || str[i] == original_letters[k] - 32)
			{
				encoded_str[j] = leet_map[k];
				break;
			}
		}
	}

	encoded_str[j] = '\0';
	return encoded_str;
}
