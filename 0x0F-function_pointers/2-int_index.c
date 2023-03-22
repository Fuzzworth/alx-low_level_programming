#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - short description
 *
 * Description: long description
 *
 * @array: argument_1 description
 * @size: argument_2 description
 * @cmp: argument_3 description
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != 0 && size > 0  && cmp != 0)
		for (index = 0; index < size; index++)
			if (cmp(array[index]))
				return (index);
	return (-1);
}
