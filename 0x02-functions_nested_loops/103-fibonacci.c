#include <stdio.h>

/**
 * sum_even_fibonacci - Calculates the sum of even-valued terms in the Fibonacci sequence
 *                      that do not exceed 4,000,000
 *
 * Return: The sum of even-valued terms
 */
unsigned long long sum_even_fibonacci(void)
{
    unsigned long long fib1 = 1, fib2 = 2, fib_next;
    unsigned long long sum = 2;

    while (fib_next <= 4000000)
    {
        fib_next = fib1 + fib2;

        if (fib_next % 2 == 0)
            sum += fib_next;

        fib1 = fib2;
        fib2 = fib_next;
    }

    return sum;
}

int main(void)
{
    unsigned long long sum = sum_even_fibonacci();

    printf("%llu\n", sum);

    return 0;
}

