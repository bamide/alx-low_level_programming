#include <stdio.h>

/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4,
 *                      followed by a new line.
 */
void print_most_numbers(void)
{
    char numbers[] = "01356789\n"; // The numbers to print
    int i = 0;

    while (numbers[i] != '\0')
    {
        // Using putchar to print each character
        putchar(numbers[i]);
        i++;
    }
}

int main(void)
{
    // Call the function to print the numbers
    print_most_numbers();
    return 0;
}
