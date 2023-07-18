#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num = -10;
	int abs_num = _abs(num);

    printf("The absolute value of %d is %d\n", num, abs_num);

    return (0);
}

