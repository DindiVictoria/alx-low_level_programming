#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given memory region.
 *
 * @start: Pointer to the start of the memory region.
 * @num_bytes: Number of bytes to print opcodes for.
 */
void print_opcodes(char *start, int num_bytes)
{
	int i = 0;

	while (i < num_bytes)
	{
		printf("%02hhx", start[i]);
		if (i < num_bytes - 1)
			printf(" ");
		i++;
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, 1 if argument count is wrong, 2 if bytes is negative.
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	char *start = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(start, num_bytes);

	return (0);
}

