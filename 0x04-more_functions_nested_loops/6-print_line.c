#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * Description: function that draws a straight line in the terminal.
 *
 * @n: the number of underscores to print
 *
 * Return: return description
 */

void print_line(int n)
{
	int number;

	number = n;

	while (number > 0)
	{
		_putchar('_');
		number--;
	}
	_putchar('\n');
}
