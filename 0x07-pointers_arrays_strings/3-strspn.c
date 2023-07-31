#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing the acceptable characters
 *
 * Return: The number of bytes in the initial segment of s that consist only of
 *         bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;

			while (*a != '\0')
			{
				if (*s == *a)
				{
					count++;
					break;
				}
				a++;
			}
			if (*a == '\0') /* The character in s is not found in accept */
				break;

			s++;
	}

		return (count);
}
