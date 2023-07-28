#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
    int capitalize_next = 1; // Flag to indicate if the next character should be capitalized

    for (int i = 0; str[i] != '\0'; i++)
    {
        // Check if the current character is a separator
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
            str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' ||
            str[i] == '{' || str[i] == '}')
        {
            capitalize_next = 1; // Set the flag to capitalize the next character
        }
        else if (capitalize_next)
        {
            // If the flag is set, capitalize the current character and reset the flag
            str[i] = toupper(str[i]);
            capitalize_next = 0;
        }
        else
        {
            // If the flag is not set, convert the current character to lowercase
            str[i] = tolower(str[i]);
        }
    }

    return str;
}

