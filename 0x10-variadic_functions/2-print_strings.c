#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: Address to String of Separators.
 * @n: Number of arguments.
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *ptr;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(valist, char*);
		if (ptr == NULL)
			printf("(nil)");
		if (separator == NULL)
			printf("%s", ptr);
		else
			printf("%s", ptr);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
