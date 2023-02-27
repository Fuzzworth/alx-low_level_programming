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
	int index_one, index_two, length, middle;

	length = 0;

	for (index_one = 0; *(str + index_one) != '\0'; index_one++)
	{
		if (*(str + index_one) != '\0')
			length++;
	}
	if (length > 0 && length % 2 != 0)
	{
		middle = (length / 2) + 1;
	}
	else if (length > 0 && length % 2 == 0)
	{
		middle = (length / 2);
	}
	else
	{
		middle = length;
	}

	for (index_two = middle; index_two < length; index_two++)
	{
		_putchar(*(str + index_two));
	}
	_putchar('\n');
}
