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
	unsigned long t1, t2, nextTerm;

	t1 = 0;
	t2 = 1;
	nextTerm = t1 + t2;

	printf("%lu, %lu", t1, t2);

	for (i = 3; i <= 50; ++i)
	{
		printf(", %lu", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}
