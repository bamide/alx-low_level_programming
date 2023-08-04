#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
        char *dest_start = dest; /* Save the starting address of dest */

        /* Copy each character from src to dest until the null terminator is reached */
        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }

        /* Copy the null terminator '\0' to dest */
        *dest = '\0';

        /* Return the starting address of dest */
        return dest_start;
}
