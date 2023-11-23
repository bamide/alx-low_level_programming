#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumeric - Check if a string is composed of digits
 * @str: The input string to check
 *
 * Return: 1 if composed of digits, 0 otherwise
 */
int isNumeric(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0; /* Not a digit */
        }
        str++;
    }
    return 1; /* Composed of digits */
}

/**
 * multiply - Multiply two positive numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The result of multiplication
 */
int multiply(int num1, int num2) {
    return num1 * num2;
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[]) {
    int num1, num2, result;

    /* Check the number of arguments */
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    /* Check if arguments are composed of digits */
    if (!isNumeric(argv[1]) || !isNumeric(argv[2])) {
        printf("Error\n");
        return 98;
    }

    /* Convert arguments to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    /* Perform multiplication */
    result = multiply(num1, num2);

    /* Print the result */
    printf("%d\n", result);

    return 0;
}
