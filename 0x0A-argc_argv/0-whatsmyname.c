#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This program prints its name, followed by a new line.
 *              If you rename the program, it will print the new name,
 *              without having to compile it again.
 *              It keeps an unused variable to demonstrate the compilation
 *              with unused variables.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	/* Unused variable (argc) to demonstrate compilation with unused variables */
	(void)argc;

	/* Print the program name (keeping the path before the name) */
	printf("%s\n", argv[0]);

	return (0);
}
