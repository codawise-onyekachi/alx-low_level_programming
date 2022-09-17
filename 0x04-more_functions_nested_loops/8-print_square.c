#include "main.h"

/**
 *
 *
 */

void print_square(int size)
{
	int len;
	int height;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (len = 0; len < size; len++)
			{
				putchar('#');
			}

			if (height == size - 1)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
