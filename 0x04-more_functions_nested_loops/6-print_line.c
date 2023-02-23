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

void pritn_line(int n)
{
	while (n != 0)
	{
		_putchar('_');
		n--;
	}
}
