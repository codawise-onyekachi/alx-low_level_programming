#include "main.h"
#include <stdio.h>

/**
 * _strncat - function description
 * Description: prints concatination of two strings
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
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
	while (*dest)
	{
		dest++;

	}
	if (n > src_len)
	{
		n = src_len;

	}
	src = start;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;

	}
	*dest = '\0';

	return (temp);

}
