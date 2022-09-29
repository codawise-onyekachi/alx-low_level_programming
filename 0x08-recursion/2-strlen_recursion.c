#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function description
 * Description: prints the lenght of a string
 * @s: string input to be printed
 * Return:length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);

	}
	return (0);

}
