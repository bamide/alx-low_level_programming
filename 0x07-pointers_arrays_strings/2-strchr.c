#include "main.h" 
#include <stdio.h>

/**
 * _strchr - function with two arguments
 * @s: char type pointer 1st argument
 * @c: char type 2nd argument
 *
 * Description: locates a character in a string
 * Return: character in string
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s; // Return the pointer when the character is found
        }
        s++;
    }

    if (c == '\0')
    {
        return s; // Return the pointer at the end for null character
    }

    return NULL; // Return NULL if the character is not found
}
