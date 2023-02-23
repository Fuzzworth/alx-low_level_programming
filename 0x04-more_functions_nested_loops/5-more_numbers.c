#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Description: prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int number;

	for (number = 0; number <= 14; number++)
	{
		if (number > 9)
		{
			_putchar('1');
		}
		_putchar((number % 10) + 48);
	}
	_putchar('\n');
}
