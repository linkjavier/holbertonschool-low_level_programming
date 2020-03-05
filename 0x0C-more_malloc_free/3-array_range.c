#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers.
 *
 * @min: An int.
 * @max: An int.
 *
 * Return: The pointer s3
 */

int *array_range(int min, int max)
{
	int *s3;
	int i;

	if (min > max)
		return (NULL);
	s3 = malloc(sizeof(int) * (max - min + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		s3[i] = min;
	return (s3);
}
