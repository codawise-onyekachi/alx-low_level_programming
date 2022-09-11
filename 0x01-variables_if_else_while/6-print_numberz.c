#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * putchar - out put the result
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
