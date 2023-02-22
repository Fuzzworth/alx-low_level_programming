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
	unsigned long t1_h1, t1_h2, t2_h1, t2_h2;
	unsigned long h1, h2;

	t1 = 1;
	t2 = 2;
	nextTerm = t1 + t2;
	printf("%lu, %lu", t1, t2);
	for (i = 3; i <= 92; ++i)
	{
		printf(", %lu", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	t1_h1 = t1 / 10000000000;
	t2_h1 = t2 / 10000000000;
	t1_h2 = t1 % 10000000000;
	t2_h2 = t2 % 10000000000;
	for (i = 93; i <= 98; i++)
	{
		h1 = t1_h1 + t2_h1;
		h2 = t1_h2 + t2_h2;
		if ((t1_h2 + t2_h2) > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf(", %lu%lu", h1, h2);
		t1_h1 = t2_h1;
		t1_h2 = t2_h2;
		t2_h1 = h1;
		t2_h2 = h2;
	}
	printf("\n");
	return (0);
}
