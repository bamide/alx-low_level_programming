#include <stdio.h>

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0'); /* Handle the special case of n=0 separately */
	}
	else
	{
		if (n < 0)
		{
			_putchar('-'); /* Print negative sign if n is negative */
			n = -n; /* Make n positive for the recursive function */
		}
		print_number_recursive(n); /* Call the recursive function for positive n */
	}
}
