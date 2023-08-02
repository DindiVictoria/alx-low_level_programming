#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: If we reach the end of the string */
		return;

	_print_rev_recursion(s + 1); /* Recursively call function withnextcharacter */
	write(1, s, 1); /* Print current character of string after recursive call */
}
