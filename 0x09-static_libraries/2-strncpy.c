#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copys the strings
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;

	int i = 0;

	char *temp = dest;

	char *start = src;

	while (*src)
	{
		src_len++;

		src++;

	}
	src_len++;

	if (n > src_len)
	{
		n = src_len;

	}
	src = start;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;

	}
	return (temp);

}
