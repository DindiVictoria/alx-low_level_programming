#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i,j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}
}
