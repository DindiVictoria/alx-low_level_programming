#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in a newly allocated memory space.
 *
 * @str: The string to be duplicated.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         On failure (str is NULL or memory allocation fails), returns NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	/*Calculate the length of the input string*/
	while (str[length] != '\0')
	{
		length++;
	}

	/* Allocate memory for the duplicated string*/
	duplicate = (char *)malloc((length + 1) * sizeof(char));
		if (duplicate == NULL)
		{
			return (NULL);
		}

	/*Copy the input string to the new memory location*/
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
