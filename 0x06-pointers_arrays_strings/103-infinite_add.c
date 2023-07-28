#include <stdio.h>
#include <string.h> 

/**
 * infinite_add - Adds two positive numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result (r) or 0 if the result can't fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    reverse_string(n1);
    reverse_string(n2);

    int carry = 0;
    int i, digit, num1, num2, sum;

    for (i = 0; n1[i] != '\0' || n2[i] != '\0' || carry; i++)
    {
        num1 = (n1[i] != '\0') ? (n1[i] - '0') : 0;
        num2 = (n2[i] != '\0') ? (n2[i] - '0') : 0;
        sum = num1 + num2 + carry;

        if (i >= size_r - 1)
        {
            return 0;
        }

        r[i] = (sum % 10) + '0';
        carry = sum / 10;
    }

    r[i] = '\0';
    reverse_string(r);

    return r;
}
