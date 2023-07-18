#include <stdio.h>

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	return (0);
}
