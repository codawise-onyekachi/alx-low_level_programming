#include "main.h"
#include <stdio.h>

/**
 * print_number - function description
 * Description: prints integers enters as parameters using putchar
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('_');

		num = -num;

	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);

	}
	putchar((num % 10) + '0');

}
