#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array.
 *
 * @nmemb: Adress to String.
 * @size: Adress to String.
 *
 * Return: The pointer s3
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s3;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s3 = malloc(nmemb * size);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		s3[i] = 0;
	return (s3);
}
