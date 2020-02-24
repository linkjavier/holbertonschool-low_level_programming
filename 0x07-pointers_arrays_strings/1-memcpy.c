#include "holberton.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, N;

	N = n;
	for (i = 0; i != '\0'; i++)
	{
		if (i <= N)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}

