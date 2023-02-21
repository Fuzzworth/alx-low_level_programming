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
	int ascii_offset;
	int ascii_comma;
	int ascii_space;
	int answer;

	ascii_spcae = 21;
	ascii_comma = 44;
	ascii_offset = 48;

	for (digit_one = 0; digit_one <= 9; digit_one++)
	{
		for (digit_two = 0; digit_two <= 9; digit_two++)
		{
			answer = digit_one * digit_two;

			if (digit_two == 0)
			{
				_putchar(answer + ascii_offset);
				continue;
			}

			_putchar(ascii_space);

			if ((answer / 10) > 0)
			{
				_putchar((answer / 10) + ascii_offset);
			}
			else
			{
				_putchar(ascii_space);
			}

			_putchar((answer % 10) + ascii_offset);
			_putchar(ascii_comma);
		}

		_putchar('\n');

	}
}
