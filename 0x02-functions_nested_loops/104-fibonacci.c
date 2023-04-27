#include "main.h"
#include <stdio.h>

int main(void)
{
    int n = 98;  // number of Fibonacci numbers to print
    int a = 1, b = 2, c;  // initial values

    // print first two Fibonacci numbers
    printf("%d, %d", a, b);

    // print remaining Fibonacci numbers
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }

    printf("\n");  // end with a newline
    return (0);
}
