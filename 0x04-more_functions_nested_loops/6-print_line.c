#include <stdio.h>

/**
 * main - draws a straight line in the terminal
 *
 *
 * Return: Always 0.
 */
void print_line(int n)
{
    if (n > 0)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
    }
    _putchar('\n');
}
