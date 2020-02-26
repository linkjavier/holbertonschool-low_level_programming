#include "holberton.h"

/**
 * factorial - Function that returns the factorial of a given number.
 * @n: An int for calculate his factorial.
 * Return: -1 for negative and 1 for cero. Return Factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
