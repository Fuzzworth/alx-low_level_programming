#include "main.h"

/**
 * puts2 - function that prints a string, followed by a new line.
 *
 * Description: function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: String pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int index;

	for (index = 0; *(str + index) != '\0'; index++)
	{
		if (*(str + index) == '\0')
		{
			break;
		}
		if (index % 2 == 0)
		{
			_putchar(*(str + index));
		}
	}
	_putchar('\n');
}
