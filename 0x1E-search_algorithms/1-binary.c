#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - Function that searches for a value in an array
 * of integers using the Linear search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The size of the array.
 * @value: Value to search for.
 * Return: The first index where value is located, -1 otherwise.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid <= right; mid++)
		{
			if (mid == right)
				printf("%d\n", array[mid]);
			else
			{
				printf("%d, ", array[mid]);
			}
		}
		mid = ((left + right) / 2);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
