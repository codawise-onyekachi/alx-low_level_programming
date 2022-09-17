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
			for(base = size - h; base > 0; base--)
			{
				putchar(' ');
			}
			for (base = 0; base < h; base++)
			{
				putchar('#');
			}
			if (h == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
