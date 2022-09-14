#include "main.h"

/**
 * main - entry point
 * Return: Always 0 (success)
 */

void printx10_alphabets(void)
{

	int i;

	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);

		}
		_putchar('\n');
	}

}
