#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * Description: function that prints the chessboard
 *
 * @a: chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int n_index, h_index;

	for (h_index = 0; h_index < 8; h_index++)
	{
		for (n_index = 0; n_index < 8; n_index++)
		{
			_putchar(a[h_index][n_index]);
		}
		_putchar('\n');
	}
}
