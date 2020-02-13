#include <stdio.h>

/**
* main - Fizz for 3 - Buzz for 5 - FizzBuzz for 3 and 5.
*
* Return:  Always 0
*
* @void - Prints a series solution
*/

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; ++i)
	{
		if ((!(i % 3)) && (!(i % 5)))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (!(i % 5))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
		printf(" ");
		}
}
printf("\n");
return (0);
}
