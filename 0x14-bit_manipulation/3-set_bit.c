#include <stdio.h>
#include "main.h"

/**
 * set_bit - prints digits
 *
 * Description: prints digits
 *
 * @n: integer to print
 * @index: index integer
 *
 * Return: return 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index > (8 * 8))
		return (-1);

	*n |= (1 << index);
	if (*n & (1 << index))
		return (1);
	else
		return (0);
}