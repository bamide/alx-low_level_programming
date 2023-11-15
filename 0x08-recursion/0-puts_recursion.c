#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 *
 * Description: This function prints each character of the string recursively
 * until it reaches the null terminator ('\0'), at which point it prints a newline.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        /* Base case: end of the string, print newline */
        putchar('\n');
        return;
    }

    /* Print the current character and call the function with the next character */
    putchar(*s);
    _puts_recursion(s + 1);
}
