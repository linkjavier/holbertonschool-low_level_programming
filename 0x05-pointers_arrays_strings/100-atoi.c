#include "holberton.h"
#include <stdio.h>


int _atoi(char *s)
{
	int i = 0;
	int sum = 0;
	int b = 1;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			b = b*-1;
		}
		 if (s[i] >= 48 && s[i] <= 57)
		{
			sum = sum*10 + (s[i] - 48);
		}
	i++;
	}
	sum = sum*b;
        return (sum);
}
