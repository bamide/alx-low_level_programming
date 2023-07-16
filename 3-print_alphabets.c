#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int i;

    /* Print lowercase alphabet */
    for (i = 97; i <= 122; i++)
    {
        putchar(i);
    }

    /* Print uppercase alphabet */
    for (i = 65; i <= 90; i++)
    {
        putchar(i);
    }

    /* Print new line */
    putchar('\n');

    return (0);
}
