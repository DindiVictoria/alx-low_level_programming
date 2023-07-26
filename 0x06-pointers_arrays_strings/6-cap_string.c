#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1; /* Flag to indicate that the next character should be capitalized */

	while (*ptr != '\0')
	{
		/* Check if the character is a separator */
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
				*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
				*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
				*ptr == '}')
		{
			capitalize_next = 1; /* Set the flag to capitalize the next character */
		}
		/* Check if the character is a lowercase letter and should be capitalized */
		else if (*ptr >= 'a' && *ptr <= 'z' && capitalize_next)
		{
			*ptr -= 32; /* Convert lowercase to uppercase */
			capitalize_next = 0; /* Reset the flag */
		}
		else
		{
			capitalize_next = 0;
		}

		ptr++;
	}

	return (str);
}
