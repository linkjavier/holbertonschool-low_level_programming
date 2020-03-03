#include "holberton.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: Pointer to String.
 * @s2: Pointer to String.
 * Return: tmp.
 */


int _strcmp(char *s1, char *s2)
{
	int i;
	int x = 0;
	int tmp;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && x == 0; i++)
	{
		if (s1[i] == s2[i])
			tmp = 0;
		else
		{
			tmp = s1[i] - s2[i];
			x = 1;
		}
	}
	return (tmp);
}
