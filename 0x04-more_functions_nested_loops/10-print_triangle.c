#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 *
 * Description: function that prints a triangle, followed by a new line.
 *
 * @n: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int n)
{
	int index_one, index_two;

	if (n > 0)
	{
		for (index_one = 0; index_one <= n; index_one++)
		{
			for (index_two = 0; index_two < index_one; index_two++)
			{
				if (index_two < index_one)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
