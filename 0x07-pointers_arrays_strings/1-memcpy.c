#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function description
 * Description: copy memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *starting = dest;

	while (n--)
	{
		*dest = *src;

		dest++;

		src++;

	}
	return (starting);

}
