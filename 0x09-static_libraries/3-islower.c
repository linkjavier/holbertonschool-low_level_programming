#include "holberton.h"

/**
 * _islower - Checks that int c is lowercase.
 *
 * @c: an int:wq
 *
 *
 * Return: 1 if is lowercase, 0 otherwise
**/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
