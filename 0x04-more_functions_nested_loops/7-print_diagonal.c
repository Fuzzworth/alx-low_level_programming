#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 *
 * Description: function that draws a diagonal line in the terminal.
 *
 * @n: the number of backslashes to print
 *
 * Return: return description
 */

void print_diagonal(int n)
{
	int index_one, index_two;

	if (n > 0)
	{
		for (index_one = 0; index_one <= n; index_one++)
		{
			for (index_two = 0; index_two < index_one; index_two++)
			{
				if (index_two == (index_one - 1))
				{
					_putchar('\\');
					_putchar('\n');
					break;
				}
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
