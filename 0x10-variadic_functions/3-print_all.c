#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function that prints anything.
 * @format: List of types of arguments passed to the function.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int j = 0, i = 0;
	char *sep = "";
	ops types[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
	};

	va_start(valist, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *types[j].c)
			{
				printf("%s", sep);
				types[j].f(&valist);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}

/**
 * printchar - prints a char of a valist
 * @valist: A Valist.
 * Return: void
 */

void printchar(va_list *valist)
{
	printf("%c", va_arg(*valist, int));
}

/**
 * printint - prints an integer of a valist
 * @valist: A Valist
 * Return: void
 */

void printint(va_list *valist)
{
	printf("%d", va_arg(*valist, int));
}

/**
 * printfloat - prints a float of a valist
 * @valist: A Valist
 * Return: void
 */

void printfloat(va_list *valist)
{
	printf("%f", va_arg(*valist, double));
}

/**
 * printstring - prints a string of a valist
 * @valist: A Valist
 * Return: void
 */

void printstring(va_list *valist)
{
	char *s = va_arg(*valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
