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
	if (index == 0)
	{
		if (n & 1)
			return (1);
		else
			return (0);
	}
	else
	{
		get_bit(n >> 1, index - 1);
	}
}
