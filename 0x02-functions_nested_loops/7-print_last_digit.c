#include "main.h"
/**
* print_last_digit - Program prints the lowercase alphabet
*
* Description: Program prints the lower case alphabet using
* _puthchar and a for loop over the ascii table character set
*
* @n: integer to print the last digit
*
* Return: returns the last digit
*
*/
int print_last_digit(int n)
{
	int last_digit;
	int ascii_offset;
	int ascii_code;

	ascii_offset = 48;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;
	ascii_code = last_digit + ascii_offset;

	_putchar(ascii_code);

	return (ascii_code);
}
