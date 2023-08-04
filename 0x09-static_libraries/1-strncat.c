#include "main.h"    

/**
* _strncat - Concatenates two strings up to n bytes from src.
* @dest: The destination buffer.
* @src: The source string.
* @n: The maximum number of bytes from src to be concatenated.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
        char *result = dest; /* Store the starting address of dest */

        /* Move dest pointer to the end of the string */
        while (*dest != '\0')
                dest++;

        /* Append at most n characters from src to dest */
        while (n > 0 && *src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }

        *dest = '\0'; /* Null-terminate the resulting string */

        return result;
}
