#include "main.h"

/**
 * main - entry point
 * print_alphabet - prints the alphabet in lower letters, followed by a new line
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
