#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Selectscorrect function to perform the operation asked by user
 *
 * @s: The operator passed as an argument to the program.
 *
 * Return: A pointer to functionthatcorresponds to operator given as parameter
 *         or NULL if the operator is not recognized.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
