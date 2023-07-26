#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_map[128] = {0};
	char replace[] = "01374";
	char leet_chars[] = "oleatOLEAT";

	int i;

	for (i = 0; leet_chars[i] != '\0'; i++)
	{
		leet_map[(int)leet_chars[i]] = replace[i];
	}

	while (*ptr != '\0')
	{
		if (leet_map[(int)*ptr] != 0)
		{
			*ptr = leet_map[(int)*ptr];
		}
		ptr++;
	}

	return (str);
}
