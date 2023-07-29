#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
    char digit;
    for (digit = '0'; digit <= '9'; digit++)
    {
        write(1, &digit, 1);
        if (digit != '9')
        {
            char space = ' ';
            write(1, &space, 1);
        }
    }
    char newline = '\n';
    write(1, &newline, 1);
}
