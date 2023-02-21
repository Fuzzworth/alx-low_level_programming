#include "main.h"
/**
* print_sign - Program prints the lowercase alphabet
*
* Description: Program prints the lower case alphabet using
* _puthchar and a for loop over the ascii table character set
*
* @n: ASCII equivalent integer
*
* Return: 1 if lowercase and 0 otherwise
*
*/
int print_sign(int n)
{
	int result;
	int ascii_positive;
	int ascii_negative;
	int ascii_zero;

	ascii_positive = 43;
	ascii_negative = 45;
	ascii_zero = 48;

	if ( n == 0 )
	{
		_puthchar(ascii_zero);
		result = 0;
	}
	else if (n > 0)
	{
		_putchar(ascii_positive);
		result = 1;
	}
	else
	{
		_putchar(ascii_negative);
		result = -1;
	}

	return (result);
}
