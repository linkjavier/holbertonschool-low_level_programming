#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Function that searches for an integer.
 * @array: Address to array.
 * @size: Size of Array.
 * @cmp: Address to function.
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
