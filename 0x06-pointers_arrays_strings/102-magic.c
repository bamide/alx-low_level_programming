#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4};
    int *p;

    p = a;

    /* Your one line of code goes here (at line 19) */
    printf("a[2] = %d\n", *(p + 2));

    return 0;
}
