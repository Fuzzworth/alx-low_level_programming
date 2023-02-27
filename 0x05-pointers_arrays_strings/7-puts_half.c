#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * Description: function that prints half of a string, followed by a new line
 *
 * @str: String pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int index_one, index_two, length;

	length = 0;

	for (index_one = 0; *(str + index_one) != '\0'; index_one++)
	{
		length++;
	}
	for (index_two = 0; index_two > (length / 2); index_two--)
	{
		_putchar(*(str + index_two));
	}
	_putchar('\n');
}
