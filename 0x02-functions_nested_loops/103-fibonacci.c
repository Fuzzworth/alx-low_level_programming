#include <stdio.h>
/**
* main - Program prints digits only using putchar and ascii tables
*
* Description: Program prints digits using putchar and ascii tables
*
* Return: 0 if execution has no errors
*/
int main(void)
{
	unsigned long t1, t2, nextTerm, sum;

	t1 = 1;
	t2 = 2;
	nextTerm = t1 + t2;
	sum = 2;

	while (nextTerm <= 4000000)
	{
		if (nextTerm % 2 == 0)
			sum += nextTerm;
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("%lu\n", sum);
	return (0);
}
