#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * Description: function that reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	if (n % 2 != 0)
	{
		for (index = 0; index < (n / 2); index++)
		{
			temp = a[index];
			a[index] = a[(n - 1) - index];
			a[n - (index - 1)] = temp;
		}
	}
	else
	{
		for (index = 0; index <= (n / 2); index++)
		{
			temp = a[index];
			a[index] = a[(n - 1) - index];
			a[n - (index - 1)] = temp;
		}
	}
}
