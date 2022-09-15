#include "main.h"

/**
 * print_sign - Check description
 * _putchar - output sign
 * @n: An input number
 * Description: prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or -1 for others
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

	else
	{
		_putchar('0');

		return (0);

	}

	_putchar('\n');

}

