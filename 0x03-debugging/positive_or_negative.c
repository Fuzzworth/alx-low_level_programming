#include "main.h"

/**
* positive_or_negative - Program generates a random numbers
*
* Description: Program prints a a positive,
* negative or zero.
*
* @n: integer to test
*
* Return: 0 if execution has no errors
*/
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
