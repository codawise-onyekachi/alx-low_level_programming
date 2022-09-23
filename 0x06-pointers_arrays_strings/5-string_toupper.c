#include "main.h"
#include <stdio.h>

/**
 *
 *
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
