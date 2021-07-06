#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 * @a: size array chessboard
 * Return:  void
 */

void print_chessboard(char (*a)[8])
{

	int c = 0, b;

	while (c < 8)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
		c++;
	}
}
