#include "holberton.h"
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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int s1size, s2size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1size = 0 ; s1[s1size]; s1size++)
	{}
	for (s2size = 0 ; s2[s2size]; s2size++)
	{}
	if (s2size > n)
		s2size = n;
	s3 = malloc(s1size + s2size);
	if (s3 == NULL)
		return (NULL);
	for (i = 0 ; s1[i] && i < s1size; i++)
		s3[i] = s1[i];
	for (j = 0 ; s2[j] && j < n && j < s2size; j++, i++)
		s3[i] = s2[j];
	s3[s1size + s2size] = '\0';
	return (s3);
}
