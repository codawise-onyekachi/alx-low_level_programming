#include <stdio.h>
#include <stdlib.h>

/** main - entry point
 * Return: Always 0 (success)
 */

int main (void)
{
	long factor;

	long num = 612852475143;

	for (factor = 2;factor < num; factor++)
	{
		if (num % factor == 0)
		{
			num = num / factor;
		}

	}
	printf("%li\n", num);

	return (0);

}
