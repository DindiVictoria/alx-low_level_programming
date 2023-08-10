#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_block;
	unsigned int total_size;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	mem_block = malloc(total_size);

	if (mem_block == NULL)
		return (NULL);

	ptr = mem_block;

	while (total_size > 0)
	{
		*ptr = 0;
		ptr++;
		total_size--;
	}

	return (mem_block);
}
