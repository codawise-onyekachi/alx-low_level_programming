#include "main.h"

/**
 * print_last_digit - decription to print the last digit of a number.
 * @n: The number in question.
 * Return: Value of the last digit.
 *
 */
int print_last_digit(int d)
{
	int last_digit = d % 10;

	if (last_digit < 0)
	{
		last_digit = -1 * last_digit;

	}

	_putchar(last_digit + '0');

	return (last_digit);

}
