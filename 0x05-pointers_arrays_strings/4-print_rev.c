#include <stdio.h>
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
	int index, length;

	length = 0;

	for (index = 0; *(s + index) != '\0'; index++)
	{
		length++;
	}

	printf("Length of string: %d\n", length);
	_putchar(*(s + length));

	for (index = length - 1; index < 0; index--)
	{
		_putchar(*(s + index));
	}
	_putchar('\n');
}
