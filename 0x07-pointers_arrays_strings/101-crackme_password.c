#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: Address to pointer
 * @to: Address to char
 * 
 */

void set_string(char **s, char *to)
{
	*s = to;
}
