#include <stdio.h>

/**
 * main - prints 10 times the numbers, from 0 to 14, followed by a new line
 *
 * Return: Always 0.
 */

int _putchar(char c);
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}

/* Custom _putchar function */
int _putchar(char c)
{
	return write(1, &c, 1);
}
