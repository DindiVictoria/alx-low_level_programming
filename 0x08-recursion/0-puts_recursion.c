#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /*Base case: If we reach the end of the string */
	{
		write(1, "\n", 1); /*Print a new line */
		return;
	}

	write(1, s, 1); /* Print the current character of the string */
	_puts_recursion(s + 1); /*Recursively call the function */
}
