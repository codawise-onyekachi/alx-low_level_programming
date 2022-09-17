#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * putchar = output the result
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
 
}