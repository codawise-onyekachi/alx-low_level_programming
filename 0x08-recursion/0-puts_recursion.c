#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function description
 * Description: print strings followed by new line
 * @s: string input
 * Return: return nothing.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);

		_puts_recursion(s + 1);

	}
	else
	{
		putchar('\n');

	}
}
