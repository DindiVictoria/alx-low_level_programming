#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates array of chars & initializes it with a specific char
 *
 * @size: The size of the array to create.
 * @c: The char value to initialize the array with.
 *
 * Return: On success, returns a pointer to newly created & initialized array.
 *         On failure (size is 0 or memory allocation fails), returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
