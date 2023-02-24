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
	unsigned long number, maxPrime, oddPrime;

	number = 612852475143;
	maxPrime = 0;
	oddPrime = 3;

	while (number % 2 == 0)
	{
		maxPrime = 2;
		number /= 2;
	}
	while (number != 1)
	{
		while (number % oddPrime == 0)
		{
			maxPrime = oddPrime;
			number /= oddPrime;
		}
		oddPrime += 2;
	}

	printf("%lu\n", maxPrime);

	return (0);
}
