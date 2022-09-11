#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * putchar - output result
 * Return: Always 0 (success)
 */

int main(void)
{
	int d;

	int d1;

	for (d = '0'; d < '9'; d++)
	{
		for (d1 = d + 1; d1 <= '9'; d1++)
		{
			if (d1 != d)
			{
				putchar(d);

				putchar(d1);

				if (d == '8' && d1 == '9')
				{
					continue;
				}

				putchar(',');

				putchar(' ');
			}
		}
	
	}
	putchar('\n');
	return (0);
}
