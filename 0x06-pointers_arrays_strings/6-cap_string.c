#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string to capitalize.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *str)
{
    int capitalize_next = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
            str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
            capitalize_next = 1;
        }
        else if (capitalize_next)
        {
            str[i] = toupper(str[i]);
            capitalize_next = 0;
        }
    }

    return str;
}
