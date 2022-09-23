#include "main.h"
#include <stdio.h>

int check_seperators(char c);

/**
 * cap_string - function description
 * Description: capitalizes all words of a string
 * @s:input string to capitalize letters
 * Return: return pointer to s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;

		}
		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[1 + i] = s[1 + i] - 32;

		}
		i++;

	}
	return (s);

}

/**
 * check_seperators - Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @c: input character
 * Return: 1 if seperator, 0 otherwise
 */

int check_seperators(char c)
{
	int i = 0;

	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?','"', '(', ')', '{', '}' };

	for (i = 0; i < 13; i++)
	{
		if (c == seperators[i])
		{
			return (1);

		}
	}
	return (0);

}
