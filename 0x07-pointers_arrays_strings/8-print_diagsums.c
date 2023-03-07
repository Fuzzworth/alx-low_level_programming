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
	int index;
	unsigned int diagsum_one, diagsum_two;

	diagsum_one = diagsum_two = 0;

	for (index = 0; index < size; index++)
	{
		diagsum_one += a[(index * size) + index];
		diagsum_two += a[(size * (index + 1)) - (index + 1)];
	}
	printf("%d, %d\n", diagsum_one, diagsum_two);
}
