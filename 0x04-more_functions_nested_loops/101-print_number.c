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
	int sign;

	if (n < 10 && n > 0)
	{
		_putchar(n + '0');
	}
	else if (n > -10 && n < 0 )
	{
		_putchar('-');
		_puthchar(-n + '0');
	}
	else
	{
		print_number(n / 10);
	}

}
