#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to char (double pointer)
 * @to: Pointer to the string to set 's' to
 *
 * Description: The function sets the value of the pointer 's' to the address
 *              of the string pointed by 'to'.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
