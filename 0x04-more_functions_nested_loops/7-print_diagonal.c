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
	int number;

	number = n;

	while (number > 0)
	{
		if (number == 1)
		{
			_putchar('\\');
		}
		_putchar(' ');
		number--;
	}
	_putchar('\n');
}
