#include "holberton.h"

int fact(int n);

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if ((fact(n-1) % n) == -1 % n)
		return (1);
	else return (0);
}

int fact(int n)
{
	if(n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * fact(n - 1));
}
