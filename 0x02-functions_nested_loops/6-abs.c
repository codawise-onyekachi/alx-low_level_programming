#include "main.h"

/**
 *_abs - Check Holberton
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);

	}

	else
	{
		return (-n);

	}
	_putchar('\n');

}
