#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
    /* Check if the character is between '0' and '9' */
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
