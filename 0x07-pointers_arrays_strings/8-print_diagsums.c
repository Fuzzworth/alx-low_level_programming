#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * Description: function that prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: matrix
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int n_index, h_index;
	unsigned int diagsum_one, diagsum_two;
	int *row;

	diagsum_one = diagsum_two = 0;

	for (h_index = 0; h_index < size; h_index++)
	{
		row = &a[0];
		for (n_index = 0; n_index < size; n_index++)
		{
			if (h_index == n_index)
				diagsum_one += row[n_index];
			if (h_index == (size - n_index - 1))
				diagsum_two += row[(size - n_index - 1)];
		}
	}
	printf("%d, %d\n", diagsum_one, diagsum_two);
}
