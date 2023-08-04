#include <stdio.h>

/**
 * _strncpy - Copies the first n characters of the source string to the destination string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of characters to be copied.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }

        /* Fill remaining characters in dest with '\0' */
        for (; i < n; i++)
        {
                dest[i] = '\0';
        }

        return dest;
}
