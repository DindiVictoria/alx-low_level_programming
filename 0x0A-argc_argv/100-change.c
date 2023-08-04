#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This program calculates the minimum number of coins required
 * to make change for an amount of money (in cents).
 *
 * Return: 0 if successful, 1 if there are invalid arguments.
 */

int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			num_coins++;
		}
	}

	printf("%d\n", num_coins);
	return (0);
}
