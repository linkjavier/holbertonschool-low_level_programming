#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Function that copy a string and return a pointer to the new string
 * @str: Address to string
 *
 * Return: NULL if error or str.
 */

char *_strdup(char *str)
{
	char *str2;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		str2 = malloc(sizeof(char) * strlen(str));
		if (str2 == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < strlen(str) ; i++)
			{
			str2[i] = str[i];
			}
			return (str2);
		}
	}
}

