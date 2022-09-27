#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function description
 * Description:  searches a string for any of a set of bytes
 * @s:
 * @accept:
 * Return:
 */

char *_strpbrk(char *s, char *accept)
{
	char *starting = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);

			}
			accept++;

		}
		accept = starting;

		s++;

	}
	return (NULL);

}
