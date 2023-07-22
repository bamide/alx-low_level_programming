#include <unistd.h>

int _putchar(char c);

// Function to print 10 times the numbers from 0 to 14
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            if (j < 10)
            {
                _putchar(j + '0');
            }
            else
            {
                _putchar('1');
                _putchar(j % 10 + '0');
            }
        }
        _putchar('\n');
    }
}

// Custom _putchar function (you can use your own implementation)
int _putchar(char c)
{
    return write(1, &c, 1);
}

// Test the function
int main(void)
{
    more_numbers();
    return 0;
}
