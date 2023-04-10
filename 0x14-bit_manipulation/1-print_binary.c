#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints digits
 *
 * Description: prints digits
 *
 * @n: integer to print
 *
 * Return: return number of characters printed
 */
void print_binary(unsigned long int n)
{
	while (1)
	{
		if (n == 0)
		{
			_putchar('0');
			return;
		}
		else if (n >> 1 >= 2)
		{
			_putchar('0');
			n = n >> 1;
		}
		else if (n < 2)
		{
			_putchar('0' + n);
			break;
		}
	}
}
