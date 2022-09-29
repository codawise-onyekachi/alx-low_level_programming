#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - function description
 * Description: returns
 * @x:base value
 * @y:exponential value
 * Return:The result of x raised y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);

	}
	else if (y < 0)
	{
		return (-1);

	}
	else if (y == 1)
	{
		return (x);

	}
	return (x = x *  _pow_recursion(x, y - 1)); 
}

