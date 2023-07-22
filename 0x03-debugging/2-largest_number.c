#include <stdio.h>
#include "main.h"

/**
 * main - Prints the largest of 3 integers
 * Return: 0
 */
int main(void)
{
    int a, b, c;
    int largest;

    a = 972;
    b = -98;
    c = 0;

    largest = largest_number(a, b, c);

    printf("%d is the largest number\n", largest);

    return (0);
}
#include "main.h"

/**
 * largest_number - Returns the largest of 3 numbers
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
    int largest;

    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
