#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (a == NULL || n <= 0)
		return;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");

		i++;
	}

	printf("\n");
}
