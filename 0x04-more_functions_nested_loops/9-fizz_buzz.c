#include <stdio.h>
/**
 * main - entry point
 * Return:Always 0 on (success).
 * printf - output the result
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("FIZZ");
		}
		else if (i % 5 == 0)
		{
			printf("BUZZ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FIZZBUZZ");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
