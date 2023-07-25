#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the converted string.
 *         If there are no numbers in the string, it returns 0.
 *         If the number is out of the range of int, it returns INT_MAX or INT_MIN.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	/* Skip leading whitespace */
	while (*s == ' ')
		s++;

	/* Check for sign */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/* Convert string to integer */
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			/* Check for overflow */
			if (result > (INT_MAX - digit) / 10)
			{
				if (sign == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}

			result = result * 10 + digit;
		}
		else
		{
			/* If a non-digit character is found, stop conversion */
			break;
		}
		s++;
	}

	return result * sign;
}
