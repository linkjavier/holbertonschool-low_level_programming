#include "holberton.h"

/**
 * _strncpy - Function that concatenates two strings.
 * @dest: Pointer to String.
 * @src: Pointer to String.
 * @n: Variable that indicates the size of ser to copy.
 * Return: dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

