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
		_putchar(n + 48);
	}
	else if (n > -10 && n < 0)
	{
		_putchar(45);
		_putchar(-n + 48);
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	else if (n < 0)
	{
		print_number(n / 10);
		_putchar(((-n) % 10) + 48);
	}
	else if (n > 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + 48);
	}
}
