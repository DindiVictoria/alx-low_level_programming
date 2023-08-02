#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: The number for which the factorial is to be calculated
 *
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0) /*Base case: If n is negative, return -1 to indicate an error*/
		return (-1);

	if (n == 0) /*Base case: If n is 0, the factorial is 1*/
		return (1);

	/* Recursive call to calculate factorial for n - 1 and then multiply by n*/
	return (n * factorial(n - 1));
}
