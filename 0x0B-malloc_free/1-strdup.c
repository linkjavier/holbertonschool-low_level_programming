#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that copy a string and return a pointer to the new string
 * @str: Address to string
 *
 * Return: NULL if error or str.
 */

char *_strdup(char *str)
{
	char *str2;
	int i, j;


	for (i = 0; str[i] ; i++)
	{}

	str2 = malloc(sizeof(char) * i);

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i ; j++)
	{
		str2[j] = str[j];
	}
	str2[j] = '\0';
	return (str2);
}
