#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: Address to String
 * @c: an int.
 * Return: An Address.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);

	return (0);
}
