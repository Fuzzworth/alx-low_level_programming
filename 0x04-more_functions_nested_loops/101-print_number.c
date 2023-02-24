#include "main.h"

/**
 * print_number - prints an integer
 *
 * Description:  prints an integer
 *
 * @n: Integer to print
 *
 * Return: return description
 */

void print_number(int n)
{

	if (n < 10 && n > 0)
	{
		_putchar(n + '0');
	}
	else if (n > -10 && n < 0)
	{
		_putchar('-');
		_putchar(-n + '0');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_number(n / 10);
		if (n < 0)
		{
			_putchar(((-n) % 10) + '0');
		}
		else
		{
			_putchar((n % 10) + '0');
		}
	}
}
