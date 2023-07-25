#include "main.h"
#include <string.h>

void puts_half(char *str)
{
    int length = strlen(str);
    int start_index;

    if (length % 2 == 0)
    {
        // If the length is even, start_index is half the length
        start_index = length / 2;
    }
    else
    {
        // If the length is odd, start_index is (length - 1) / 2
        start_index = (length - 1) / 2;
    }

    // Print the second half of the string
    for (int i = start_index; i < length; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
