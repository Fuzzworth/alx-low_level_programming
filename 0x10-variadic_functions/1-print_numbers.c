#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * Description: function that prints numbers, followed by a new line
 *
 * @n: indefinite number of integer arguments
 * @separator: string seperator
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all_parameters;
	unsigned int index;

	va_start(all_parameters, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(all_parameters, int));
		if (index != (n - 1) && separator != 0)
			printf("%s", separator);
	}
	va_end(all_parameters);
	printf("\n");
}
