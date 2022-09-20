#include "main.h"
#include <stdio.h>

/**
 * print_rev - function description
 * Description:print string in reverse followed by
 * new line
 * @s: input string
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;

	}
	while (len)
	{
		putchar(s[--len]);

	}
	putchar('\n');

}
