#include "main.h"
#include <stdio.h>

int strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 * strlen_recursion - function description
 * Description: function to obtain the length of the string s
 * @s: A string to calculate length
 * Return: returns the length of string s
 */

int strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);

	}
	return (strlen_recursion(s + 1) + 1);

}


/**
 * is_palindrome - function description
 * Description:  checks if s is a palindrome string
 * @s: String input
 * Return: returns 1 if is string is a palindrome or 0 in otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen_recursion(s);

	if (len <= 1)
	{
		return (1);

	}
	return (helper_palindrome(s, len));

}

/**
 * helper_palindrome - function description
 * Description: with a revesed string
 * @s: An input string
 * @len: the length of the string s
 * Return: a reversed string
 */

int helper_palindrome(char *s, int len)
{
	if (len <= 1)
	{
		return (1);

	}
	else if (*s == *(s + len - 1))
	{
		return (helper_palindrome(s + 1, len - 2));

	}
	else
	{
		return (0);

	}
}
