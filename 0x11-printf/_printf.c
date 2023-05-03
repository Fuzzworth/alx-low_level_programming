#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts_pointer - converts pointer to string and prints
 *
 * Description: converts pointer to string and prints
 *
 * @num: pointer to convert to string
 *
 * Return: number of characters in pointer address
 */
int _puts_pointer(void *pointer)
{
	int number_of_digits_printed, index;
	char num_rev_string[64];
	char *num_string;
	char temp_char;
	size_t pointer_address;

	pointer_address = (size_t) pointer;
	number_of_digits_printed = 0;

	while (1)
	{
		switch (pointer_address % 16)
		{
			case 0:
				temp_char = '0';
				break;
			case 1:
				temp_char = '1';
				break;
			case 2:
				temp_char = '2';
				break;
			case 3:
				temp_char = '3';
				break;
			case 4:
				temp_char = '4';
				break;
			case 5:
				temp_char = '5';
				break;
			case 6:
				temp_char = '6';
				break;
			case 7:
				temp_char = '7';
				break;
			case 8:
				temp_char = '8';
				break;
			case 9:
				temp_char = '9';
				break;
			case 10:
				temp_char = 'a';
				break;
			case 11:
				temp_char = 'b';
				break;
			case 12:
				temp_char = 'c';
				break;
			case 13:
				temp_char = 'd';
				break;
			case 14:
				temp_char = 'e';
				break;
			case 15:
				temp_char = 'f';
				break;
		}
		if ((pointer_address / 16) > 0)
		{
			
			num_rev_string[number_of_digits_printed] = (temp_char);
			number_of_digits_printed++;
			pointer_address /= 16;
		}
		else if ((pointer_address / 16) < 16)
		{
			num_rev_string[number_of_digits_printed] = (temp_char);
			number_of_digits_printed++;
			num_rev_string[number_of_digits_printed] = '\0';
			break;
		}
	}

	num_string = (char *) malloc(sizeof(char) + number_of_digits_printed);

	if (num_string == 0)
		return (1);

	_putchar('0');
	_putchar('x');
	number_of_digits_printed += 2;
	for (index = (number_of_digits_printed - 1); index >= 0; index--)
		_putchar(num_rev_string[index]);

	return (number_of_digits_printed);
}


/**
 * _puts_hex - converts integer to hex and prints digits
 *
 * Description: converts intger to hex and prints digits
 *
 * @num: integer to convert to octal
 * @flag: Capatalize or not flag
 *
 * Return: number of characters in number
 */
int _puts_hex(unsigned int num, int flag)
{
	int number_of_digits_printed, index;
	char num_rev_string[15];
	char *num_string;
	char temp_char;

	number_of_digits_printed = 0;

	while (1)
	{
		switch (num % 16)
		{
			case 0:
				temp_char = '0';
				break;
			case 1:
				temp_char = '1';
				break;
			case 2:
				temp_char = '2';
				break;
			case 3:
				temp_char = '3';
				break;
			case 4:
				temp_char = '4';
				break;
			case 5:
				temp_char = '5';
				break;
			case 6:
				temp_char = '6';
				break;
			case 7:
				temp_char = '7';
				break;
			case 8:
				temp_char = '8';
				break;
			case 9:
				temp_char = '9';
				break;
			case 10:
				if (flag)
					temp_char = 'a';
				else
					temp_char = 'A';
				break;
			case 11:
				if (flag)
					temp_char = 'b';
				else
					temp_char = 'B';
				break;
			case 12:
				if (flag)
					temp_char = 'c';
				else
					temp_char = 'C';
				break;
			case 13:
				if (flag)
					temp_char = 'd';
				else
					temp_char = 'D';
				break;
			case 14:
				if (flag)
					temp_char = 'e';
				else
					temp_char = 'E';
				break;
			case 15:
				if (flag)
					temp_char = 'f';
				else
					temp_char = 'F';
				break;
		}
		if ((num / 16) > 0)
		{
			
			num_rev_string[number_of_digits_printed] = (temp_char);
			number_of_digits_printed++;
			num /= 16;
		}
		else if ((num / 16) < 16)
		{
			num_rev_string[number_of_digits_printed] = (temp_char);
			number_of_digits_printed++;
			num_rev_string[number_of_digits_printed] = '\0';
			break;
		}
	}

	num_string = (char *) malloc(sizeof(char) + number_of_digits_printed);

	if (num_string == 0)
		return (1);

	for (index = (number_of_digits_printed - 1); index >= 0; index--)
		_putchar(num_rev_string[index]);

	return (number_of_digits_printed);
}


/**
 * _puts_octal - converts integer to octal and prints digits
 *
 * Description: converts intger to octal and prints digits
 *
 * @num: integer to convert to octal
 *
 * Return: number of characters in number
 */
int _puts_octal(unsigned int num)
{
	int number_of_digits_printed, index;
	char num_rev_string[15];
	char *num_string;

	number_of_digits_printed = 0;

	while (1)
	{
		if ((num / 8) > 0)
		{
			num_rev_string[number_of_digits_printed] = ((num % 8) + '0');
			number_of_digits_printed++;
			num /= 8;
		}
		else if ((num / 8) < 8)
		{
			num_rev_string[number_of_digits_printed] = ((num % 8) + '0');
			number_of_digits_printed++;
			num_rev_string[number_of_digits_printed] = '\0';
			break;
		}
	}

	num_string = (char *) malloc(sizeof(char) + number_of_digits_printed);

	if (num_string == 0)
		return (1);

	for (index = (number_of_digits_printed - 1); index >= 0; index--)
		_putchar(num_rev_string[index]);

	return (number_of_digits_printed);
}

/**
 * _puts_unsigned_integer - converts integer to string and prints digits
 *
 * Description: converts intger to string and prints digits
 *
 * @num: integer to convert to string
 *
 * Return: number of characters in number
 */
int _puts_unsigned_integer(unsigned int num)
{
	int number_of_digits_printed, index;
	char num_rev_string[15];
	char *num_string;

	number_of_digits_printed = 0;

	while (1)
	{
		if ((num / 10) > 0)
		{
			num_rev_string[number_of_digits_printed] = ((num % 10) + '0');
			number_of_digits_printed++;
			num /= 10;
		}
		else if ((num / 10) < 10)
		{
			num_rev_string[number_of_digits_printed] = ((num % 10) + '0');
			number_of_digits_printed++;
			num_rev_string[number_of_digits_printed] = '\0';
			break;
		}
	}

	num_string = (char *) malloc(sizeof(char) + number_of_digits_printed);

	if (num_string == 0)
		return (1);

	for (index = (number_of_digits_printed - 1); index >= 0; index--)
		_putchar(num_rev_string[index]);

	return (number_of_digits_printed);
}


/**
 * _puts_binary - converts integer to binary and prints digits
 *
 * Description: converts intger to binary and prints digits
 *
 * @num: integer to convert to binary
 *
 * Return: number of characters in binary
 */
int _puts_binary(int num)
{
	int number_of_digits_printed, is_first;
	double exponential;

	is_first = 1;
	number_of_digits_printed = 0;
	exponential = 32.0;

	while (exponential >= 0.0)
	{
		if ( num >= pow(2.0, exponential))
		{
			if (is_first)
				is_first = 0;
			_putchar('1');
			num -= pow(2.0, exponential);
		}
		else
		{
			if (!is_first)
				_putchar('0');
		}
		number_of_digits_printed++;
		exponential--;
	}

	return (number_of_digits_printed);
}

/**
 * _puts_integer - converts integer to string and prints digits
 *
 * Description: converts intger to string and prints digits
 *
 * @num: integer to convert to string
 *
 * Return: number of characters in number
 */
int _puts_integer(int num)
{
	int number_of_digits_printed, sign, index;
	char num_rev_string[15];
	char *num_string;

	number_of_digits_printed = sign = 0;

	if (num < 0)
	{
		sign = 1;
		num = -(num);
	}

	while (1)
	{
		if ((num / 10) > 0)
		{
			num_rev_string[number_of_digits_printed] = ((num % 10) + '0');
			number_of_digits_printed++;
			num /= 10;
		}
		else if ((num / 10) < 10)
		{
			num_rev_string[number_of_digits_printed] = ((num % 10) + '0');
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

	num_string = (char *) malloc(sizeof(char) + number_of_digits_printed);

	if (num_string == 0)
		return (1);

	for (index = (number_of_digits_printed - 1); index >= 0; index--)
		_putchar(num_rev_string[index]);

	return (number_of_digits_printed);
}

/**
 * _puts - function that prints a string.
 *
 * Description: function that prints a string to stdout
 *
 * @str: String pointer
 *
 * Return: length of string excluding null byte
 */

int _puts(char *str)
{
	int index, str_length;

	str_length = 0;

	for (index = 0; str[index]; index++)
	{
		_putchar(*(str + index));
		str_length++;
	}
	
	return (str_length);
}

/**
 * _printf - function that produces output according to a format
 *
 * Description: function that produces output according to a format
 *
 * @format: String Format
 *
 * Return: number of charracters printed
 */

int _printf(const char *format, ...)
{
	int number_of_characters_printed, format_position, format_length;
	char *string_placeholder;
	va_list all_parameters;

	format_length = strlen(format);
	number_of_characters_printed = 0;

	va_start(all_parameters, format);

	format_position = 0;

	while (format[format_position])
	{
		if ((format_position + 1) <= (format_length - 1))
		{
			if (format[format_position] == '%')
			{
				switch (format[format_position + 1])
				{
					case 'c':
						_putchar(va_arg(all_parameters, int));
						number_of_characters_printed++;
						format_position += 2;
						break;
					case 's':
						string_placeholder = (char *) va_arg(all_parameters, char *);
						number_of_characters_printed += _puts(string_placeholder);
						format_position += 2;
						break;
					case '%':
						_putchar('%');
						number_of_characters_printed++;
						format_position += 2;
						break;
					case 'i':
					case 'd':
						number_of_characters_printed = _puts_integer(va_arg(all_parameters, int));
						format_position += 2;
						break;
					case 'b':
						number_of_characters_printed = _puts_binary(va_arg(all_parameters, int));
						format_position += 2;
						break;
					case 'u':
						number_of_characters_printed = _puts_unsigned_integer(va_arg(all_parameters, unsigned int));
						format_position += 2;
						break;
					case 'o':
						number_of_characters_printed = _puts_octal(va_arg(all_parameters, unsigned int));
						format_position += 2;
						break;
					case 'x':
						number_of_characters_printed = _puts_hex(va_arg(all_parameters, unsigned int), 1);
						format_position += 2;
						break;
					case 'X':
						number_of_characters_printed = _puts_hex(va_arg(all_parameters, unsigned int), 0);
						format_position += 2;
						break;
					case 'p':
						number_of_characters_printed = _puts_pointer(va_arg(all_parameters, void *));
						format_position += 2;
						break;

					default:
						_putchar(format[format_position]);
						number_of_characters_printed++;
						format_position++;
						break;
				}

			}
			else if (format[format_position] == '\\')
			{
				_putchar(format[format_position]);
				number_of_characters_printed++;
				format_position++;

			}
			else
			{
				_putchar(format[format_position]);
				number_of_characters_printed++;
				format_position++;
			}
		}
		else
		{
			_putchar(format[format_position]);
			number_of_characters_printed++;
			format_position++;
		}
	}

	va_end(all_parameters);

	return (number_of_characters_printed);
}
