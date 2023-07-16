#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k, l;

    for (i = 0; i <= 9; i++)
    {
        for (j = i; j <= 9; j++)
        {
            for (k = j; k <= 9; k++)
            {
                for (l = k; l <= 9; l++)
                {
                    putchar(i + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(j + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(k + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(l + '0');
                    putchar('\n');
                }
            }
        }
    }

    return (0);
}
