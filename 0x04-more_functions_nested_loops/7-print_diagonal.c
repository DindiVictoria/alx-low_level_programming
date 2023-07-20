#include <stdio.h>

/* Prototype for the custom _putchar function */
int _putchar(char c);

void print_diagonal(int n)
{
    if (n > 0)
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}

/* Custom _putchar function */
int _putchar(char c)
{
    return write(1, &c, 1);
}

