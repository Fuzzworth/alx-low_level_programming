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

	last_digit = n % 10;
	return (last_digit);
}
