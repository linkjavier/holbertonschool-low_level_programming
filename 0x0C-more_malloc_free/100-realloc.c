#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Function that reallocates a memory block using malloc and free.
 * @ptr: Addres to string.
 * @old_size: the address of memory to print.
 * @new_size: the size of the memory to print.
 *
 * Return: Adress to new pointer ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr3 = ptr;
	char *ptr2;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size || ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
		return (NULL);
	}
	for (i = 0; i < new_size; i++)
		ptr2[i] = ptr3[i];
	free(ptr);

	return (ptr2);
}
