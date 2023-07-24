#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @str: Pointer to the input string.
 *
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the input string.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2;
	while (start < length)
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n');
}
