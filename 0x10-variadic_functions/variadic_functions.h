#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct opstruct - Struct op
 *
 * @c: Type to operate
 * @f: The function associated
 */

typedef struct opstruct
{
	char *c;
	void (*f)(va_list *);
} ops;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printchar(va_list *);
void printint(va_list *);
void printfloat(va_list *);
void printstring(va_list *);

#endif /* VARIADIC_FUNCTIONS_H */
