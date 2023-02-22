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
	int i;
	unsigned long t1, t2, nextTerm, sum;

	t1 = 1;
	t2 = 2;
	nextTerm = t1 + t2;
	sum = 3;

	for (i = 3; i <= 50; ++i)
	{
		sum += nextTerm;
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("%lu\n",sum);
	return (0);
}
