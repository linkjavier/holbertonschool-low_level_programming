#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 *
 * @s: pointer
 *
 * Return: Lenght.
 */

int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

