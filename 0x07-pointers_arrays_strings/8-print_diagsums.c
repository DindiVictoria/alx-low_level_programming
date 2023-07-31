#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the 2D square matrix (represented as a 1D array)
 * @size: The size of the square matrix (number of rows or columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j) /*elements on first diagonal */
				sum1 += *(a + i * size + j);
			if (i + j == size - 1) /* elements on second diagonal */
				sum2 += *(a + i * size + j);
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
