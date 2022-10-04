#include "main.h"
#include <stdio.h>

/**
 * _strspn - function description
 * Description:  gets the length of a prefix substring
 * @s:input string
 * @accept: an input character with to locate into string s
 * Return:returns pointer to c position
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	
	int flag;

	char *starting = accept;

	while (*s)
	{
		flag = 0;

		while (*accept)
		{
			if (*accept == *s)
			{
				count++;

				flag = 1;

				break;

			}
			accept++;

		}
		s++;

		accept = starting;

		if (flag == 0)
		{
			break;

		}
	}
		return (count);

}
