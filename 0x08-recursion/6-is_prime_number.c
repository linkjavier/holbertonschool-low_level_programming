#include "holberton.h"

/**
 * is_prime_number - Checks if n  is prime
 * @n: An int to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
<<<<<<< HEAD
	else if ((fact(n-1) % n) == -1 % n)
		return (1);
	else return (0);
=======
	return (check(n, 2));
>>>>>>> 68f6fdbd0934c5d290d9690e0998799e5dd59a54
}

/**
 * check - Check the module.
 * @a: int
 * @x: int to check the module
 *
 * Return: 1 if num is prime, 0 otherwise
 */

int check(int a, int x)
{
	if (a % x == 0)
	{
		if (x == a)
			return (1);
		else
			return (0);
	}
	return (check(a, x + 1));
}
