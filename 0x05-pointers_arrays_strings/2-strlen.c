#include "main.h"


/**
 * _strlen - function description
 * Description: returns the lenght of string
 * Return: Always 0
 * @s: input string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;

	}
	return (len);

}
