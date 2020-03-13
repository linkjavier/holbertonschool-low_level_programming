#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 * @separator: Address to String os Separators.
 * @n: Number of arguments.
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	printf("%d", va_arg(valist, int));

	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(valist, int));
		}
		else
		{
			printf("%s", separator);
			printf("%d", va_arg(valist, int));
		}
	}
	va_end(valist);
	printf("\n");
}
