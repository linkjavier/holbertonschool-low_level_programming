#include "holberton.h"

/**
 * _isdigit - Checks for a ditig (0 through 9)
 * @c: The int to check
 *
 * Return: On success 1 True Otherwise 0
 *
*/

int _isdigit(int c)
{
	if (c  >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
