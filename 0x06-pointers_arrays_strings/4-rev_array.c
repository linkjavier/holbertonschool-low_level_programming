#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: Pointer to integer
 * @n: Size of a
 */


void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	n -= 1;

	for (i = 0; i < (n / 2) ; ++i, --n)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
	}
}
