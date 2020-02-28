#include "holberton.h"

/**
 * wildcmp -C ompares two strings.
 * @s1: Address to String
 * @s2: Address to String. Can contain the special character *
 * Return: 1 if match, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
		return (wildcmp(s1 + 1, s2 + 1));
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		if (*(s1 + 1) != '\0' && *s2 == '\0')
			return (0);
	}
	return (0);
}
