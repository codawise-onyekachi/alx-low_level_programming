#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function description
 * Description: changes all lowercase letters of a  string
 * to uppercase
 * @s:input string
 * Return:char pointer to converted string
 */

char *string_toupper(char *s)
{
	char *chang = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;

		}
		s++;

	}
	return (chang);

}
