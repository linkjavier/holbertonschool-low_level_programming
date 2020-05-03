#include<stdio.h>
void startupfun(void) __attribute__ ((constructor));

/**
 * startupfun - Function that prints a text of a story
 *
 * Return: Always 0.
 */

void startupfun(void)
{
	char *str;

	str = "I bore my house upon my back!\n";
	printf("You're beat! and yet, you must allow,\n%s", str);
}
