#include "main.h"

/**
 *
 */

void rev_string(char *s)
{
	int len = 0;
	
	int i = 0;

	char p;

	while (s[len] != '\0')
	{
		len++;

	}
	while (i < len--)
	{
		p = s[i];

		s[i++] = s[len];

		s[len] = p;

	}
}
