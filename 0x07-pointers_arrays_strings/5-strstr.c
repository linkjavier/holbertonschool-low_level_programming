#include "holberton.h"

/**
 * _strstr - Function that locates a substring.
 *
 * @haystack: Address of s String.
 * @needle: Address of a String.
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, x;

	for (; needle[i]; i++)
	{
		for (; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
			{
				x = 0;
				break;
			}
			else
			{
				x = 1;
			}
		}
	}
	if (x == 0)
	{
		return (&needle[0]);
	}
	else
	{
		return (NULL);
	}
}

