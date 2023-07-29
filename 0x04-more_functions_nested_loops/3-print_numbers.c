#include "main.h"

int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        _putchar(i + '0');
        if (i < 9)
            _putchar(' ');
    }
    _putchar('\n');
}
