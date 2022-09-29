#include "main.h"
#include <stdio.h>

/**
 * factorial - function description
 * Description: returns the factorial of a given number
 * @n: integer input
 * Return: factorial of a n
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);

	}
	if (n == 0)
	{
		return (1);

	}
	if (n < 0)
	{
		return (-1);

	}
	return (n * factorial(n - 1));

}
