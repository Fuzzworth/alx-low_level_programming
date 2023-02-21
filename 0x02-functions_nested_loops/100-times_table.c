#include "main.h"
/**
* print_times_table - Program prints the lowercase alphabet 10 times
*
* Description: Program prints the lower case alphabet 10 times using
*  the _putchar function and an nested for loop and the ascii table
*  character
*
*  @n: Integer between 0 and 15
*
*/
void print_times_table(int n)
{
	int digit_one, digit_two, answer, last_digit, second_digit, third_digit;

	if (n == 0)
		_putchar('0');
	else if (n > 0 && n <= 15)
	{
		for (digit_one = 0; digit_one <= n; digit_one++)
		{
			for (digit_two = 0; digit_two <= n; digit_two++)
			{
				answer = digit_one * digit_two;
				last_digit = answer % 10;
				second_digit = answer / 10;
				third_digit = answer / 100;
				if (digit_two == 0)
				{
					_putchar(answer + 48);
					_putchar(44);
					continue;
				}
				_putchar(' ');
				if (third_digit > 0)
					_putchar(third_digit + 48);
				else
					_putchar(' ');
				if (second_digit > 0)
				{
					if (second_digit >= 10)
						second_digit %= 10;
					_putchar(second_digit + 48);
				}
				else
					_putchar(' ');
				_putchar(last_digit + 48);
				if (digit_two != n)
					_putchar(44);
			}
			_putchar('\n');
		}
	}
}
