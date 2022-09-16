#include "main.h"

/**
 * print_diagonal - function description
 * Description: prints out the diagonal
 */

void print_diagonal(int n)
{
	int len;

	int space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (len == n - 1)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
