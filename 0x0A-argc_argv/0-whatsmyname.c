#include "main.h"
#include <stdio.h>

/**
 * main - function description
 * Description: prints its name,followed by a new line
 * argc: agument count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);

	}
	return (0);
}
