#include "holberton.h"

/**
 * length - Function that return the length of string
 * @s: Address to String
 * Return: Length of s
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + length(s + 1));
}

/**
 * compare - Function that compare two Strings
 * @s: Address to String
 * @len: Length of string
 * @i: An int to move on the String
 * Return: 1 if is palindrome and 0 otherwise
 */

int compare(char *s, int len, int i)
{
	if (*(s + i) == *(s + len - 1 - i) && i == (len / 2))
		return (1);
	else if (*(s + i) != *(s + len - 1 - i))
		return (0);
	else
		return (compare(s, len, i + 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: Address to String
 * Return: 1 if a string if palindrome and 0 if otherwise.
 */

int is_palindrome(char *s)
{
	if (compare(s, length(s), 0) == 1)
		return (1);
	else
		return (0);
}
