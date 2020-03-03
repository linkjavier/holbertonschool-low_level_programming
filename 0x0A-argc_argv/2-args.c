#include "holberton.h"

/**
 * main - Program that prints all arguments it receives.
 * @argc: Numbers of arguments.
 * @argv: Pointer to String of arguments.
 * Return: Always 0.
 *
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

