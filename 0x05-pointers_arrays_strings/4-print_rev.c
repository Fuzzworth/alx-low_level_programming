#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * Description: function that prints a string, in reverse,
 * followed by a new line
 *
 * @s: String pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int index_one, index_two, length;

	length = 0;

	for (index_one = 0; *(s + index_one) != '\0'; index_one++)
	{
		length++;
	}
	for (index_two = (length - 1); index_two >= 0; index_two--)
	{
		_putchar(*(s + index_two));
	}
	_putchar('\n');
}
