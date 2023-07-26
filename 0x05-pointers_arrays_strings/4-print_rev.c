#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse order.
 * @str: The input string to be printed in reverse.
 */
void print_rev(char *str)
{
    if (str == NULL)
        return; // Check if the string is NULL

    // Find the length of the string
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    // Print the string in reverse order
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}
