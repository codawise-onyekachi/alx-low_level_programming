#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function description
 * Description: a program that multiplies two numbers
 * @argc:program counter
 * @argv:The arguments' values
 * Return: return the arguments' values
 */

int main(int argc, char **argv)
{
	int num1;

	int num2;

	int prod;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);

	}
	else
	{
		num1 = atoi(argv[1]);

		num2 = atoi(argv[2]);

		prod = num1 * num2;

		printf("%d\n", prod);

		return (0);

	}
}
