#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */

void print_square(int size)
{
	int len;
	int height;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (len = 0; len < size; len++)
			{
				putchar('#');
			}

			if (height == size - 1)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
