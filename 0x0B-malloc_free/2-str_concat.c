#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function with two arguments
 * @s1: char type pointer
 * @s2: char type pointer
 *
 * Description: concatenates two strings
 * Return: Null for failure or concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, i2, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	i2 = 0;
	while (s2[i2] != '\0')
		i2++;

	ptr = malloc(sizeof(char) * i + i2 + 1);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		ptr[j] = s1[j];
		j++;
	}

	k = 0;
	while (s2[k] != '\0')
	{
		ptr[j] = s2[k];
		j++;
		k++;
	}
	ptr[j] = '\0';
	return (ptr);
}
