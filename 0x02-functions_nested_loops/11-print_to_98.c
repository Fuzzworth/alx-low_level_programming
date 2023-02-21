#include "main.h"
/**
* print_to_98 - Program prints the lowercase alphabet 10 times
*
* Description: Program prints the lower case alphabet 10 times using
*  the _putchar function and an nested for loop and the ascii table
*  character
*
*/
void print_to_98(int n)
{
	int arr[100];
	int temp_n, i, j, r;

	while (true)
	{
		temp_n = n;
		i = 0;
		if (n == 98)
		{
			_putchar(57);
			_putchar(56);
			break;
		}

    		while (temp_n != 0)
		{
        		result = temp_n % 10;
			arr[i] = result;
        		i++;
        		temp_n = temp_n / 10;
    		}

		for (j = i - i; j > -1; j--)
		{
			_putchar(arr[j] + 48);
		}

		_putchar(',');
		_putchar(' ');
		_putchar('\n');

		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
}
