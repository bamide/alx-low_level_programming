#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		/* Swap elements at positions i and j */
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		/* Move towards the center of the array */
		i++;
		j--;
	}
}
