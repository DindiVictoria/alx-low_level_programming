#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 *
 * @c: The character to check.
 *
 * Return: 1 if @c is a digit, otherwise 0.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _check_digits - Checks if a string consists of digits.
 *
 * @str: The string to check.
 *
 * Return: 1 if @str consists of digits, otherwise 0.
 */
int _check_digits(char *str)
{
	while (*str)
	{
		if (!_isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - Entry point of the program.
 *
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	unsigned long int num1 = strtoul(argv[1], NULL, 10);
	unsigned long int num2 = strtoul(argv[2], NULL, 10);
	unsigned long int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!_check_digits(argv[1]) || !_check_digits(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	printf("%lu\n", result);

	return (0);
}
