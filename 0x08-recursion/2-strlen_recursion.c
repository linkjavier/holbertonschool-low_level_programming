#include "holberton.h"

/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: Address to String
 * Return: 0 for NULL and add 1 to the recursive function.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		return (1 + _strlen_recursion(&s[i + 1]));
	}
	return (0);
}
