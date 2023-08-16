#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: Index of 1st element which the comparison function doesn't return 0
 *
 * or -1 if no element matches or if size is <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
