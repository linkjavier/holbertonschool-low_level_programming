#include "holberton.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: Address of a string.
 */

void rev_string(char *s)
{
	int i = 0;
<<<<<<< HEAD
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
=======
	int j = 0;
	int t;
	char p;

	while (*(s + i) != '\0')
		i++;
	t = i;
	for (i--, j = 0; j < t / 2; i--, j++)
	{
		p = s[j];
		s[j] = s[i];
		s[i] = p;
	}

>>>>>>> 862b92676d6e4cac0fc756cc646b98cf31db7b9e
}
