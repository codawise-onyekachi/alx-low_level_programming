#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * putchar - prints out the alphabets
 * Return: Always 0 (Success)
 */

int main(void)

{
	char c;
	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}

	return (0);
}


