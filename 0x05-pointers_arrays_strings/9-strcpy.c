#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function description
 * Description:copies the string pointed to by src, including the
 *  terminating null byte (\0), to the buffer pointed to by dest
 * @dest:A pointer to destination of string
 * @src:A pointer to source string to copy from
 */

char *_strcpy(char *dest, char *src)
{
	char *word = dest;

	while (*src)
	{
		*dest++ = *src++;

	}
	return (word);

}

