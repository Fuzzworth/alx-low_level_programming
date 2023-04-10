#include <stdio.h>
#include "main.h"

/**
 * get_bit - prints digits
 *
 * Description: prints digits
 *
 * @n: integer to print
 * @index: index integer
 *
 * Return: return 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n >= ((unsigned long int) (1 << index)))
		return ((n & (1 << index)) / 2);
	else
		return (-1);
}
