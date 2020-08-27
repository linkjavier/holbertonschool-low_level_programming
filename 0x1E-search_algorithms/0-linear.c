#include <stdio.h>
#include <stdlib.h>

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
	int size_int = size;
	int i;

	if (array)
	{
		for (i = 0; i < size_int; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
