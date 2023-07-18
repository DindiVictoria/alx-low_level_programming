#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)

{
	int last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	printf("The last digit of %d is %d\n", n, last_digit);

	return (last_digit);
}

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)

{
	int num = -12345;
	int last_digit = print_last_digit(num);

	printf("The last digit of %d is %d\n", num, last_digit);

	return (0);
}
