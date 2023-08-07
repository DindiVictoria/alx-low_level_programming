#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 *
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int word_count = 0;
	int in_word = 0;
	int i;
	char **word_array;
	int word_start = 0;
	int array_index = 0;
	int word_length;
	int j;

	if (str == NULL || *str == '\0')
		return (NULL);

	/*Count the number of words*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}

	word_array = malloc((word_count + 1) * sizeof(char *));
	if (word_array == NULL)
		return (NULL);

	/*Fill the word array with words*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				word_start = i;
				in_word = 1;
			}
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				word_length = i - word_start + 1;
				word_array[array_index] = malloc(word_length + 1);
				if (word_array[array_index] == NULL)
					return (NULL);
				for (j = 0; j < word_length; j++)
				{
					word_array[array_index][j] = str[word_start + j];
				}
				word_array[array_index][word_length] = '\0';
				array_index++;
				in_word = 0;
			}
		}
	}
	word_array[array_index] = NULL;

	return (word_array);
}
