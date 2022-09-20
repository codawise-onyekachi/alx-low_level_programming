#include "main.h"
#include <stdio.h>

/**
 * puts2 - function description
 * Description: prints every other character of a string, starting
 * with the first character, followed by a new line
 * @
 */

void puts2(char *str)
{
	int len = 0;
	
	int i = 0;

	while (str[len] != '\0')
	{
		len++;

	}
	len = len - 1;

	for (i = 0; i <= len; i = i + 2)
	{
		putchar(str[i]);

	}
	putchar('\n');

}
