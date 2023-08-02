#include "main.h"


/**
 * is_prime_number - Checks if the input integer is a prime number
 * @n: The integer to be checked
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1) /* Base case: Numbers less than or equal to 1 are not prime*/
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - Helper function to check if n is a prime number
 * @n: The integer to be checked
 * @divisor: The current divisor being checked
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int check_prime(int n, int divisor)
{
	if (divisor >= n) /*Base case: If divisor is >/= to n, n is prime*/
		return (1);

	if (n % divisor == 0) /*Base case:If n isdivisible by divisor it's not prime*/
		return (0);

	/* Recursive call to check the next divisor*/
	return (check_prime(n, divisor + 1));
}
