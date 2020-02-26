#include "holberton.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals of a squ
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j, d, i;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size)
		{
			if (i == j)
			{
				d += a[i][j];
			}
		}
	}
}
