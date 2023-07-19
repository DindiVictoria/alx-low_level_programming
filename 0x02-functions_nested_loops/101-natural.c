#include <stdio.h>

/**
 * sum_multiples - Computes the sum of multiples of 3 or 5 below a given limit
 * @limit: The limit for finding multiples
 * Return: The sum of multiples of 3 or 5 below the limit
 */
int sum_multiples(int limit)
{
    int i, sum = 0;

    for (i = 0; i < limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }

    return sum;
}

int main(void)
{
    int limit = 1024;
    int result = sum_multiples(limit);

    printf("%d\n", result);

    return 0;
}

