#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural sqrt of n, or -1 if it does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /*Base case: If n is negative, it does not have a natural sqrt*/

	if (n == 0 || n == 1) /* Base case: If n is 0 or 1, its sqrt is itself*/
		return (n);

	/* Recursive call to find the square root of n using binary search*/
	return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - Helper function to find the square root using binary search
 * @n: The number to find the square root of
 * @start: The start of the binary search range
 * @end: The end of the binary search range
 *
 * Return: The square root of n, or -1 if it does not have a natural sqrt
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int mid_squared = mid * mid;

	if (start > end) /*Base case:If searchrangeis invalid n has no natrl sqrt*/
		return (-1);

	if (mid_squared == n) /*Base case:If mid^2 is equalto n, mid is sqrt*/
		return (mid);

	if (mid_squared > n) /* If mid^2 is greater than n, search in the lower half*/
		return (sqrt_helper(n, start, mid - 1));
	/* If mid^2 is less than n, search in the upper half*/
		return (sqrt_helper(n, mid + 1, end));
}
