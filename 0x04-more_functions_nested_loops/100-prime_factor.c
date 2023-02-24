#include <stdio.h>

/**
 * main - The largest prime factor of the number 612852475143
 *
 * Description: Write a program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line.
 *
 * Return: 0 for Success
 */

int main(void)
{
	unsigned long long index, index2 number, max;
	int is_prime;

	number = 612852475143;
	max = 1;

	for (index = 2; index < number; index++)
	{
		if (number % index == 0)
		{
			isprime = 1;

			for (index2 = 2; index2 < index; index2++)
			{
				if (index % index2 == 0)
				{
					isprime = 0;
					break;
				}
			}

			if (is_prime)
				max = index;

		}

	}

	printf("%d\n", max);

	return (0);
}
