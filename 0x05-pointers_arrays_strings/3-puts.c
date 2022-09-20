#include "main.h"
#include <stdio.h>

/**
 * _puts- function description
 * Description: prints a string followed by a new
 * line to stdout
 * @str: An input string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
