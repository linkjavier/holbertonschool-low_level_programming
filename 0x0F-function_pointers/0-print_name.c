#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: Address to name.
 * @f: Adrees to function.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
