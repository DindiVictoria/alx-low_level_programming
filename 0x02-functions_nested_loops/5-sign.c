#include <stdio.h>

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */
int (print_sign)
	int n;

{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('+');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)

{	int number;
	int result = print_sign;
	putchar('\n');printf("The sign of %d is %d\n", number, result);
	return (0);
}
