#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 *
 * Description: function that prints a square, followed by a new line
 *
 * @n: size of square
 *
 * Return: void
 */

void print_square(int n)
{
	int index_one, index_two;

	if (n > 0)
	{
		for (index_one = 0; index_one < n; index_one++)
		{
			for (index_two = 0; index_two < n; index_two++)
			{
				_putchar('#');
				if (index_two == (n - 1))
					_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
