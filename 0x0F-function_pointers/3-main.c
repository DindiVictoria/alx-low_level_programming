#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 on success, 98 for incorrect number of arguments,
 *         99 for invalid operator, 100 for division/modulo by zero.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2][0];
	num2 = atoi(argv[3]);

	if (operator != '+' && operator != '-' && operator != '*' &&
			operator != '/' && operator != '%')
	{
		printf("Error\n");
		return (99);
	}

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = operator == '+' ? num1 + num2 :
		operator == '-' ? num1 - num2 :
		operator == '*' ? num1 * num2 :
		operator == '/' ? num1 / num2 :
		num1 % num2;

	printf("%d\n", result);
	return (0);
}
