#include "holberton.h"

/**
 * main - Function that prints the number of arguments passed into it.
 * @argc: Numbers of arguments.
 * @argv: Pointer to String of arguments.
 * Return: Always 0.
 *
 */


int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

