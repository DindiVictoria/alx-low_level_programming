#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: The string to calculate length of.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len1, len2, total_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	total_len = len1 + n;

	concat_str = malloc(total_len + 1);
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concat_str[i] = s2[j];

	concat_str[i] = '\0';

	return (concat_str);
}
