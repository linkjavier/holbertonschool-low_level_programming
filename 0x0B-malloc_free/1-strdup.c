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

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] ; i++)
	{}

	str2 = malloc(sizeof(char) * i);

	if (str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i ; j++)
		{
<<<<<<< HEAD
			for (i = 0 ; i < strlen(str) ; i++)
			{
			str2[i] = str[i];
			}
			str2[i + 1] = '\0',
			return (str2);
=======
			str2[j] = str[j];
>>>>>>> 834118b044716c58a846336101065a8adef59982
		}
		str2[j] = '\0';
	}
	return (str2);
	free(str2);
}
