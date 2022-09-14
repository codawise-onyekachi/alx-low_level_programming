#include "main.h"

/**
 * print_alphabet_x10 - check description
 * Description: prints the alphabet 10 times followed by new line
 * _putchar - output the result
 */

void print_alphabet_x10(void)
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
