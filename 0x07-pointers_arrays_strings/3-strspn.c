#include "holberton.h"

unsigned int _strspn(char *s, char *accept)
{
	int i, j, sum = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				sum += 1;
			}
		}
		if(sum < i)
		{
			break;
		}
	}
	return (sum);
}
