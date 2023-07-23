#include <unistd.h>

/* Custom _putchar function (as it's only allowed to use twice) */
int _putchar(char c)
{
    return write(1, &c, 1);
}
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
    _putchar('\n');
} 
/**
 * main - Entry point of the program (for testing).
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    print_alphabet();
    return 0;
}  
