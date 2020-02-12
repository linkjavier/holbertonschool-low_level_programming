#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * positive_or_negative - Entry point
 * @i : Description
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{

if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
}
