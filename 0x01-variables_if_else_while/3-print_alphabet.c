#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

/**
* main - Entry point
* putchar - prints out the alphabets
* Return: Always 0 (Success)
*/


int main()

{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}


