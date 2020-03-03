#include "holberton.h"

/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: Address to String
 * @b: String.
 * @n: an int.
 *
 * Return: Return S.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, N;

	N = n;
	for (i = 0; i < N; i++)
	{
		if (i <= N)
		s[i] = b;
	}

	return (s);
}
