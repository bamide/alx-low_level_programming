#include <stdio.h>

/**
 * mul - Function that multiplies two integers.
 *
 * @a: The first integer to be multiplied.
 * @b: The second integer to be multiplied.
 *
 * Return: The product of the two integers.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num1, num2, result;

	printf("Enter the first integer: ");
	scanf("%d", &num1);

	printf("Enter the second integer: ");
	scanf("%d", &num2);

	result = mul(num1, num2);
	printf("The product of %d and %d is: %d\n", num1, num2, result);

	return (0);
}
