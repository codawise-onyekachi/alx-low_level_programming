#include "main.h"

/**
 * swap_int - function description
 * Description: swaps the values of two integers
 * @a: first input integer pointer
 * @b: second input integer
 */

void swap_int(int *a, int *b)
{
	int f = *a;
	*a = *b;

	*b = f;

}
