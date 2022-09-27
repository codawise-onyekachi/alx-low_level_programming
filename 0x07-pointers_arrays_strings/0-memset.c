#include "main.h"
#include "stdio.h"

/**
 * _memset - function description
 * Description: fills memory with a constant bytes
 * @s: location to fill
 * @b: character to fill location with
 * @n: number of bytes to fill
 * Return:returns pointer to location filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *starting = s;

	while (n--)
	{
		*s = b;

		s++;

	}
	return (starting);

}
