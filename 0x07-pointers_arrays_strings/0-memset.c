#include "holberton.h"

char *_memset(char *s, char b, unsigned int n)
{
	int i, N;

	N = n;

	

	for (i = 0; i < N; i++)
		if (i <= N)
		s[i] = b;

	return (s);
}
