#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars
 * @size: Size of the array
 * @c: Character to set the String
 *
 * Return: NULL if error or str.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(sizeof(char) * size);
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < size ; i++)
			{
			str[i] = c;
			}
			return (str);
		}
	}
}

