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
	int number_of_digits_printed, sign, index;
	char num_rev_string[15];

	number_of_digits_printed = sign = 0;


	while (1)
	{
		if ((n / 10) > 0)
		{
			num_rev_string[number_of_digits_printed] = ((n % 10) + '0');
			number_of_digits_printed++;
			n /= 10;
		}
		else if ((n / 10) < 10)
		{
			num_rev_string[number_of_digits_printed] = ((n % 10) + '0');
			number_of_digits_printed++;
			if (sign)
			{
				num_rev_string[number_of_digits_printed] = '-';
				number_of_digits_printed++;
			}
			num_rev_string[number_of_digits_printed] = '\0';
			break;
		}
	}

	for (index = (number_of_digits_printed - 1); index >= 0; index--)
		_putchar(num_rev_string[index]);
}
