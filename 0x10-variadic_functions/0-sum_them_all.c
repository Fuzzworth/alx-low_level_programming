#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * Description: function that returns the sum of all its parameters
 *
 * @n: indefinite number of integer arguments
 *
 * Return: sum of all its parameters If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list all_parameters;
	int index;
	unsigned int sum;

	sum  = 0;
	va_start(all_parameters, n);

	for (index = n; index != 0; index = va_arg(all_parameters, int))
		sum += index;

	return (sum);
}
