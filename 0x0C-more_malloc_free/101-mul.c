#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");

		exit(98);

	}
	else
	{
		num1 = atoi(argv[1]);

		num2 = atoi(argv[2]);

		result = num1 * num2;

		printf("%d\n", result);

		return (0);

	}
}
