#include "main.h"

int string_length(const char *b)
{
	int index, string_length;

	string_length = 0;
	for (index = 0; b[index]; index++)
		string_length++;
	return (string_length);
}

unsigned int power(int base, int exponent)
{
	unsigned int total;

	total = 1;
	while (exponent > 0)
	{
		total *= base;
		exponent--;
	}
	return (total);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * Description: function that converts a binary number to an unsigned int
 *
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: unsigned number or 0 is not valid
 */

unsigned int binary_to_uint(const char *b)
{
	int binary_string_position, binary_string_length;
	unsigned int total;

	total = 0;
	binary_string_length = string_length(b);

	for (binary_string_position = binary_string_length;
			binary_string_position > 0;
			binary_string_position--)
	{
		if (b[binary_string_position] == '1')
		{
			total += power(2,(binary_string_length - binary_string_position));
		}
		else if (b[binary_string_position] == '0')
		{
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (total);
}
