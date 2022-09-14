#include "main.h"

/**
 * main - entry point
 * print_alphabet - function, prints the alphabet in lower letters
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);

	}
	_putchar('\n');
}
