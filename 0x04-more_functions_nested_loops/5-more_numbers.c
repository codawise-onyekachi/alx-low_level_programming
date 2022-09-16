#include "main.h"

/**
 * more_numbers - a function that prints 10 times the number
 * from 0 to 14, followed by new line
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				putchar((j / 10) + '0');
			}
			putchar((j % 10) + '0');
		}
		putchar('\n');
	}
}
