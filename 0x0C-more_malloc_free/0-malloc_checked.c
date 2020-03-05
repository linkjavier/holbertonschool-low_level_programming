#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory
 *
 * @b: size of allocated memory
 *
 * Return: The pointer p
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
