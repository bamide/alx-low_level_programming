#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: Pointer to the input string.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        /* Base case: If we reach the end of the string (null terminator), print a new line and return. */
        putchar('\n');
        return;
    }

    /* Print the current character and make a recursive call to print the rest of the string. */
    putchar(*s);
    _puts_recursion(s + 1);
}
