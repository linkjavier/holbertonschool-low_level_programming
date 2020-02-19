#include "holberton.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: Address of a string.
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int p;

	while (*(s + i) != '\0')
		i++;
	i--;
	while (i != j)
	{
		p = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = p;
		i--;
		j++;

	}
}
