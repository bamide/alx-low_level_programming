#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return; /* Base case: end of the string */

	_print_rev_recursion(s + 1); /* Recur with the next character */
	putchar(*s); /* Print the current character after the recursive call */
}

