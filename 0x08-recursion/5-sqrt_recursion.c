#include "holberton.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: An int to calculate the natural square root.
 * @i: An int to count.
 * Return: An int.
 */

int check(int n, int i);

int _sqrt_recursion(int n)
{
	int i;

	i = check(n, 1);
	return (i);
}

/**
 * check - Function that returns the natural square root of a number.
 * @n: An int to calculate the natural square root.
 * @i: An int to count.
 *
 * Return: An int.
 */

int check(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i > n)
		return (-1);
	else
		return (check(n, i + 1));
}
