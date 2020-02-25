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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (c == '\0')
	{
		return (NULL);
	}
	return (&s[i]);
}
