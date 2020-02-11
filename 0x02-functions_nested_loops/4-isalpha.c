#include "holberton.h"

/**
 * _isalpha - Checks that int c is an alphabetic character.
 *
 * @c: an int
 *
 *
 * Return: 1 if is lowercase, 0 otherwise
**/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
