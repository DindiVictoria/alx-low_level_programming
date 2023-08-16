#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified function.
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
