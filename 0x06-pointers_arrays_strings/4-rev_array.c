#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function description
 * Description: reverses an array
 * @a: input array
 * @n: number of elements of array
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	int rev;

	while (i < n--)
	{
		rev = a[i];

		a[i++] = a[n];

		a[n] = rev;

	}
}
