#include "holberton.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: Pointer to String.
 * @src: Pointer to String.
 * @n: Variable that indicates the n size of src to concatenate.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int i;

	for (x = 0; dest[x] != '\0'; x++)
	{}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[x + i] = src[i];
	dest[x + i] = '\0';

	return (dest);
}
