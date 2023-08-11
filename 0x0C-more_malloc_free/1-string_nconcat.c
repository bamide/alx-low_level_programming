#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1, ls2, str1, str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0' && ls2 < n; ls2++)
		;
	str1 = ls1;
	str2 = ls2;
	sout = malloc(sizeof(char) * (str1 + str2 + 1));
	if (sout == NULL)
		return (NULL);
	for (ls1 = 0; ls1 < str1; ls1++)
	{
		sout[ls1] = s1[ls1];
	}
	for (ls2 = 0; ls2 < str2; ls2++)
		sout[ls1 + ls2] = s2[ls2];
	sout[ls1 + ls2] = '\0';
	return (sout);
}
