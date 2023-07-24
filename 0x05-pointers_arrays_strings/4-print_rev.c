#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the input string.
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	int i = length - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}

	putchar('\n');
}
