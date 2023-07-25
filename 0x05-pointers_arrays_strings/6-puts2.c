#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character,
 *         followed by a new line.
 * @str: Pointer to the input string.
 */
void puts2(char *str)
{
	if (str == NULL)
		return;

	int i = 0;
	while (str[i] != '\0')
	{
		/* Print only characters at even indices (0, 2, 4, ...) */
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}

	putchar('\n');
}
