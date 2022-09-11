#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * putchar - output the result
 * Return: exit success
 */

int main(void)
{
	char c;

	c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

