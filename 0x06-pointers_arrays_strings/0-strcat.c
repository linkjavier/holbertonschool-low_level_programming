#include "holberton.h"

/**
 * *_strcat - Function that concatenates two strings.
 *
 * @dest: Pointer to string
 * @src: Pointer to string
 * Return: @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
		for (j = 0; src[j] != '\0'; j++, i++)
		{
			dest[i] = src[j];
		}
return (dest);
}


