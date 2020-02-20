#include "holberton.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: Address of a string.
 */

void rev_string(char *s)
{
	int i = 0;
	int j;

	while (*(s + i) != 0)
	{
		i++; //The size of s
	}
	char aux[i]; //Create aux[i] array to save the reverse S
	j = 0;
	--i;
	while (i >= 0)
	{
		*(aux + j) = *(s + i);
		j++;
		i--;
	}
	while (j >= 0)
	{
		*(s + i) = *(aux + j);
		j--;
	}
}
