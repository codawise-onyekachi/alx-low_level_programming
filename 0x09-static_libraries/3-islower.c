#include "main.h"

/**
 * _islower - check description
 * @c: An input character
 * Description: prints the 1 or 0 as required
 * Return: return 1 for lower case letters. 0 for the rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);

	}

	_putchar('\n');

}
