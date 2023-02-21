#include "main.h"
/**
* print_to_98 - Program prints the lowercase alphabet 10 times
*
* Description: Program prints the lower case alphabet 10 times using
*  the _putchar function and an nested for loop and the ascii table
*  character
*
*  @n: integer to start from
*
*/
void print_to_98(int n)
{
	int arr[100];
	int temp_n, i, j, r, s;

	while (1)
	{
		temp_n = n;
		i = 0;
		if (n == 98)
		{
			_putchar(57);
			_putchar(56);
			break;
		}
		if (n != 0)
		{
			if (temp_n < 0)
			{
				temp_n = -temp_n;
				s = 1;
			}
			while (temp_n != 0)
			{
				r = temp_n % 10;
				arr[i] = r;
				i++;
				temp_n = temp_n / 10;
			}

			for (j = i - 1; j > -1; j--)
			{
				if (s)
				_putchar('-');
				_putchar(arr[j] + 48);
			}
		}
		else
		{
			_putchar('0');
		}
		_putchar(',');
		_putchar(' ');

		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	_putchar('\n');
}
