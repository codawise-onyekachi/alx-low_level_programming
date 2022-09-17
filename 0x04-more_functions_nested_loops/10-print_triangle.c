#include "main.h"

/**
 */

void print_triangle(int size)
{
	int h;

	int base;

	if (size > 0)
	{
		for (h = 0; h <= size; h++)
		{
			for(base = size; base >= 1; base--)
			{
				if (h < base)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
