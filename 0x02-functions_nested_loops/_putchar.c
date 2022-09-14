#include "main.h"
#include <unistd.h>

/**
 * _putchar - output the result
 * c - the characters to be printed
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
