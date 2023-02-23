#include <stdio.h>

/**
 * main - The “Fizz-Buzz test”
 *
 * Description: The “Fizz-Buzz test” is an interview question designed
 * to help filter out the 99.5% of programming job candidates who can’t
 * seem to program their way out of a wet paper bag. Write a program
 * that prints the numbers from 1 to 100, followed by a new line. But
 * for multiples of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are multiples of both
 * three and five print FizzBuzz.
 *
 * Each number or word should be separated by a space
 * You are allowed to use the standard library
 *
 * Return: O for Success
 */

int main(void)
{
	int index;

	for (index = 1; index <= 100; index++)
	{
		if (index % 3 == 0)
			printf("Fizz");

		if (index % 5 == 0)
			printf("Buzz");

		if (index % 3 != 0 && index % 5 != 0)
			printf("%d", index);

		if (index != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
