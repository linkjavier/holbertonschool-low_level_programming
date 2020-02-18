#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for Holberton School students.
 *
 * @a : Address of a variable
 * @b : Address of a variable
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;

}
