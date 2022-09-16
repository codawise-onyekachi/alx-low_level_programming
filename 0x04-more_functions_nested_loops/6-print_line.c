#include "main.h"
#include <stdio.h>

/**
 * print_line - function description
 * Description: output a straight line in the terminal
 */

void print_line(int n)
{
	int len;
	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
