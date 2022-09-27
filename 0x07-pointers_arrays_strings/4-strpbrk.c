#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function description
 * Description:  searches a string for any of a set of bytes
 * @s: input string
 * @accept: an input character with to locate into string s
 * Return:a pointer to the byte in s that matches one of the bytes
 * i accept, or NULL if no such byte is found
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
