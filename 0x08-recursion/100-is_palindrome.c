#include "main.h"
#include <stddef.h>

/**
 * _strlen - Calculates the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome
 * @s: The string to be checked
 * @start: The starting index of the current comparison
 * @end: The ending index of the current comparison
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int check_palindrome(char *s, size_t start, size_t end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);
	/* Recursive call to compare the next pair of characters */
	return (check_palindrome(s, start + 1, end - 1));
}
