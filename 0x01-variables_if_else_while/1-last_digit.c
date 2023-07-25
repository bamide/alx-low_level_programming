#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x, y;

    srand(time(0));
    x = rand();

    /* Our own code will go here */

    y = x % 10;
    printf("The last digit of the number %d is %d\n", x, y);

    return 0;
}
