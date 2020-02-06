#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c = '0';
while (c != '9')
{
putchar(c);
putchar(44);
putchar(32);
++c;
}
putchar(c);
return (0);
}
