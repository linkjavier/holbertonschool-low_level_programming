#include "holberton.h"

<<<<<<< HEAD
void print_chessboard(char (*a)[8])
{

=======
/**
 * print_chessboard - Function that prints the chessboard.
 *
 * @a: Address to array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
>>>>>>> 43670ea76d0ea727f743b18a986de23befb5f14b
