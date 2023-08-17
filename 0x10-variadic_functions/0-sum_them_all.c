#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 * @...: The variable number of arguments to be summed.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);

	return (sum);
}
