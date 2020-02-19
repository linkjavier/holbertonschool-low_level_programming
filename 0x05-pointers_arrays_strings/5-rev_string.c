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

	
}
