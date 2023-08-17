#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success, 98 for wrong argument count, 99 for invalid operator,
 *         and 100 for division/modulo by zero.
 */
int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    char operator = argv[2][0];
    int num2 = atoi(argv[3]);

    int result;

    switch (operator)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0)
            {
                printf("Error\n");
                return 100;
            }
            result = num1 / num2;
            break;
        case '%':
            if (num2 == 0)
            {
                printf("Error\n");
                return 100;
            }
            result = num1 % num2;
            break;
        default:
            printf("Error\n");
            return 99;
    }

    printf("%d\n", result);
    return 0;
}
