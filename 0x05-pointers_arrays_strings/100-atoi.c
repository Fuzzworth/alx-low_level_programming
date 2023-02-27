#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * Description: function that convert a string to an integer
 *
 * @s: String
 *
 * Return: returns integer
 */

int _atoi(char *s)
{
	int index, sign, first_digit, last_digit, power, number, exp;
	int index_two;
	char temp;

	sign = 1;
	index = 0;
	first_digit = -1;
	last_digit = -1;
	power = 0;
	number = 0;
	exp = 1;

	while(1)
	{
		temp = *(s + index);

		if (temp == '-')
		{
			sign *= -1;
		}
		else if (temp == '+')
		{
			sign = 1;
		}

		if (temp >= '0' && temp <= '9' && first_digit == -1)
			first_digit = index;

		if ((temp < '0' || temp > '9') && first_digit != -1)
		{
			last_digit = index - 1;
			break;
		}

		if (temp == '\0')
			break;
		index++;
	}

	power = last_digit - first_digit;

	for (index = first_digit; index <= last_digit; index++)
	{
		temp = *(s + index);
		for (index_two = 0; index_two < power; index_two++)
			exp *= 10;

		number += (temp - 48) * exp;
		exp = 1;
		power--;
	}

	return (sign * number);
}
