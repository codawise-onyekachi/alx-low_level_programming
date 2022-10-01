#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function description
 * Description: a function prints the minimum number of coins to make change 
 * for an amount of money
 *  @argc: number of command line arguments.
 *  @argv: array that contains the program command line arguments.
 *  Return: return 1 if the number of arguments passed is not exactly
 *  or 0 in otherwise
 */

int main(int argc, char *argv[])
{
	int cents = 0;

	int coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");

		return (1);

	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents = cents - 25;

		}
		else if (cents >= 10)
		{
			cents = cents - 10;

		}
		else if (cents >= 5)
		{
			cents = cents - 5;

		}
		else if (cents >= 2)
		{
			cents = cents - 2;

		}
		else if (cents >= 1)
		{
			cents = cents - 1;

		}
		coins = coins + 1;

	}
	printf("%d\n", coins);

	return (0);

}
