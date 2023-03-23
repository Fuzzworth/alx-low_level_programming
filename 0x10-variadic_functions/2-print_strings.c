#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * Description: function that prints strings, followed by a new line.
 *
 * @n: indefinite number of integer arguments
 * @separator: string seperator
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list all_parameters;
	unsigned int index;

	va_start(all_parameters, n);

	for (index = 0; index < n; index++)
	{
		printf("%s", 
			va_arg(all_parameters, int) ? va_arg(all_parameters, int) : "(nil)");
		if (index != (n - 1) && separator != 0)
			printf("%s", separator);
	}
	va_end(all_parameters);
	printf("\n");
}
