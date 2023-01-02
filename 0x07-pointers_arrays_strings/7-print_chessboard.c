#include "main.h"

/**
 * print_chessboard - This function prints a chessboard.
 *
 * @a: Pointer
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
int ea, ee;

for (ea = 0; ea < 8; ea++)
{
	for (ee = 0; ee < 8; ee++)
	{
		_putchar(a[ea][ee]);
	}
	_putchar('\n');
}
}
