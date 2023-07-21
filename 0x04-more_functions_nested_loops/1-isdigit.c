#include <stdio.h>

/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 if @c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
    /* ASCII codes for digits 0 to 9 are 48 to 57, respectively */
    if (c >= 48 && c <= 57)
    {
        return 1; /* Character is a digit */
    }
    else
    {
        return 0; /* Character is not a digit */
    }
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    int result = _isdigit(ch);

    if (result)
    {
        printf("%c is a digit.\n", ch);
    }
    else
    {
        printf("%c is not a digit.\n", ch);
    }

    return 0;
}
