#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The number of bytes to print
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		/* Print the hexadecimal content of the buffer */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j] & 0xFF);
			else
				printf("  ");

			if (j % 2 == 1)
				printf(" ");
		}

		/* Print the content of the buffer */
		for (k = i; k < i + 10; k++)
		{
			if (k >= size)
				printf(" ");
			else if (b[k] >= 32 && b[k] <= 126)
				printf("%c", b[k]);
			else
				printf(".");
		}

		printf("\n");
	}
}

