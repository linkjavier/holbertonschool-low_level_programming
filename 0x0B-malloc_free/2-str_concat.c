#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - check the code for Holberton School students.
 * @s1: Address to String
 * @s2: Address to String
 * Return: s3 or NULL if fail.
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, size_s1, size_s2;

	for (size_s1 = 0; s1[size_s1]; size_s1++)
	{}
	for (size_s2 = 0; s2[size_s2]; size_s2++)
	{}
	if (s1 == NULL)
	{
		s3 = malloc(sizeof(char) * size_s2);
		if (s3 == NULL)
			return (NULL);
		for (i = 0; s2[i]; i++)
			s3[i] = s2[i];
	}
	if (s2 == NULL)
	{
		s3 = malloc(sizeof(char) * size_s1);
		if (s3 == NULL)
			return (NULL);
		for (i = 0; s1[i]; i++)
			s3[i] = s1[i];
	}
	s3 = malloc(sizeof(char) * (size_s1 + size_s2));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];
	for (j = 0; s2[j]; i++, j++)
		s3[i] = s2[j];
	s3[size_s1 + size_s2] = '\0';
	return (s3);
}
