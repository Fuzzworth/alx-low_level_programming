#include <stdio.h>
#include "main.h"

/**
 * mod - function that returns the remainder
 *
 * Description: function that returns the remainder
 *
 * @n: numerator
 * @divisor: divisor
 *
 * Return: returns the remainder
 */
unsigned long int mod(unsigned long int n, int divisor)
{
	while (n >= divisor)
		n -= divisor;
	return (n);
}

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
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		print_binary(n >> 1);
		_putchar('0' + mod(n, 2));
	}
}
