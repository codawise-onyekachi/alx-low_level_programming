#include "main.h"

/**
 * rev_string - function description
 * Description: reverse a string followed by new line
 * @s: input string
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
