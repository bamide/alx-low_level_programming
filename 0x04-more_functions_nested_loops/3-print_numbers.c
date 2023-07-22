#include <stdio.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	char numbers[] = "0123456789\n";
	int i = 0;

	while (i < 11) /* Loop from 0 to 9, plus the new line character */
	{
		_putchar(numbers[i]);
		i++;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_numbers();
	return (0);
}
