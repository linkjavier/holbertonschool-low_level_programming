#include "holberton.h"

/**
 * main - Function that prints its name, followed by a new line.
 * @argc: Numbers of arguments.
 * @argv: Pointer to String of arguments.
 * Return: Always 0.
 *
 */


int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
