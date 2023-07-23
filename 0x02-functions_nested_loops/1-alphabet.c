#include <stdio.h> 
#include "main.h" 
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
    char current_char = 'a'; // Starting ASCII value for lowercase 'a'

    while (current_char <= 'z')
    {
        putchar(current_char); // Using putchar to print a character
        current_char++;
    }

    putchar('\n'); // Using putchar to print a new line
}

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet(); // Call the function to print the alphabet
    return 0;
}
