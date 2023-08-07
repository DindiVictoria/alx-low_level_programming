#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 *
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;
	int position = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++; /*Account for newline character*/
	}

	result = malloc(total_length + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[position++] = av[i][j];
		}
		result[position++] = '\n';
	}

	result[position] = '\0';

	return (result);
}
