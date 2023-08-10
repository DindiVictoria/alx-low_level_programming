#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 *
 * @min: Minimum value (included).
 * @max: Maximum value (included).
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *new_array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	new_array = malloc(size * sizeof(int));

	if (new_array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		new_array[i] = min + i;
		i++;
	}

	return (new_array);
}
