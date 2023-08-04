#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This program prints all the arguments it receives,
 *              one argument per line, including the first one.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	/* Print all the arguments, including the first one */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
