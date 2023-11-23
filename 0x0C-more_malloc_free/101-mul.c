#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply_numbers - Multiplies two integers
 * @num1: First integer
 * @num2: Second integer
 * Return: Result of the multiplication
 */
int multiply_numbers(int num1, int num2)
{
    return num1 * num2;
}

/**
 * is_valid_input - Checks if the input is a valid positive integer
 * @arg: Input string to check
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_input(const char *arg)
{
    while (*arg)
    {
        if (!isdigit(*arg))
        {
            return 0;
        }
        arg++;
    }
    return 1;
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!(is_valid_input(num1) && is_valid_input(num2)))
    {
        printf("Error\n");
        return 98;
    }

    int result = multiply_numbers(atoi(num1), atoi(num2));
    printf("%d\n", result);

    return 0;
}
