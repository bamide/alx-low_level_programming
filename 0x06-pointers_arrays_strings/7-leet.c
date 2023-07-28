#include <stdio.h>
#include <string.h>

char *leet(char *str)
{
    int i = 0;
    char ch;

    while ((ch = str[i]) != '\0')
    {
        if (ch == 'a' || ch == 'A')
            str[i] = '4';
        else if (ch == 'e' || ch == 'E')
            str[i] = '3';
        else if (ch == 'o' || ch == 'O')
            str[i] = '0';
        else if (ch == 't' || ch == 'T')
            str[i] = '7';
        else if (ch == 'l' || ch == 'L')
            str[i] = '1';

        i++;
    }

    return str;
}
