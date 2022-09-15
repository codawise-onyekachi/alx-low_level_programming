#include "main.h"

/**
 * times_table - Check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */

void times_table(void)
{
	int i;

	int j;

	int prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');


		for (j = 0; j <= 9; j++)
		{
			_putchar(',');

			_putchar(' ');

			prod = i * j;
			
			if ((prod / 10) == 0)
			{
				if (j != 0)
					
					_putchar(' ');
				
				_putchar(prod + '0');
				
				if (j == 9)
					
					continue;
				
				_putchar(',');
				
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
				
				_putchar((prod % 10) + '0');
				
				if (j == 9)
					continue;
				
				_putchar(',');
				
				_putchar(' ');

			}
		}

		_putchar('\n');

	}
}
