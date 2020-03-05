#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings.
 *
 * @s1: Adress to String.
 * @s2: Adress to String.
 * @n: unsigned int that indicates the n bytes of s2 to concatenate.
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
