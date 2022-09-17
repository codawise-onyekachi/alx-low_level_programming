#include "main.h"

/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @size: the height of the triangle.
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
