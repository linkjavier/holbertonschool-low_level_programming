#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array
 * of integers using the Linear search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The size of the array.
 * @value: Value to search for.
 * Return: The first index where value is located, -1 otherwise.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%zu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return ((int)i);
		}

	}
	return (-1);
}
