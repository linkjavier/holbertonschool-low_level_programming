#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function with parameters
 * @array: Address to array.
 * @size: Size of Array.
 * @action: Address to function.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
