#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    unsigned int fib1 = 1, fib2 = 2, fib_next;
    int count;

    printf("%d, %d", fib1, fib2);

    for (count = 3; count <= 98; count++)
    {
        fib_next = fib1 + fib2;
        printf(", %d", fib_next);
        fib1 = fib2;
        fib2 = fib_next;
    }

    printf("\n");
}

int main(void)
{
    print_fibonacci();

    return 0;
}

