#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - funtion description
 * Desription: A finction that converts binary number
 * to an unsigned integer
 * @b: A pointer to binary string
 *
 * Return: unsigned integer converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1;
	unsigned int result = 0;
	unsigned int len = 0;

	if (b == NULL)
	{
		return (0);

	}
	while (b[len])
	{
		len++;

	}
	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
		{
			return (0);

		}
		if (b[len - 1] == '1')
		{
			result = result + base;

		}
		base = base * 2;
		len--;

	}
	return (result);

}
