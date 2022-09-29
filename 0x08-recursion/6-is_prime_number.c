#include "main.h"
#include <stdio.h>
int is_divisible(int num, int div);

/**
 * _is_prime_number - function description
 * Description:checks if a number is prime
 * @:an input integer
 * Return:returns 1 if n is prime or  0 in otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);

	}
	if (n <= 3)
	{
		return (1);

	}
	return (is_divisible(n, div));

}

/**
 * is_divisible - function description
 * Description: check if num is divisible
 * @num:the number to be checked
 * @div:the result of division
 * Return:return 1 if num is divisible or 0 if numis not divisible
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);

	}
	if (div == num / 2)
	{
		return (1);

	}
	return (is_divisible(num, div + 1));

}
