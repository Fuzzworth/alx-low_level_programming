#include "main.h"
/**
* times_table - Program prints the lowercase alphabet 10 times
*
* Description: Program prints the lower case alphabet 10 times using
*  the _putchar function and an nested for loop and the ascii table
*  character
*
*/
void times_table(void)
{
	int digit_one;
	int digit_two;
	int answer;
	int last_digit;
	int second_digit;

	for (digit_one = 0; digit_one <= 9; digit_one++)
	{
		for (digit_two = 0; digit_two <= 9; digit_two++)
		{
			answer = digit_one * digit_two;
			last_digit = answer % 10;
			second_digit = answer / 10;

			if (digit_two == 0)
			{
				_putchar(answer + 48);
				_putchar(44);
				continue;
			}
			_putchar(' ');
			if (second_digit > 0)
			{
				_putchar(second_digit + 48);
			}
			else
			{
				_putchar(' ');
			}

			_putchar(last_digit + 48);

			if (digit_two != 9)
				_putchar(44);
		}

		_putchar('\n');

	}
}
