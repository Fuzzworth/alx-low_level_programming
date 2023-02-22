#include <stdio.h>
#include <stdint.h>
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
	uint64_t t1, t2, nextTerm;

	t1 = 1;
	t2 = 2;
	nextTerm = t1 + t2;

	printf("%jd, %jd", t1, t2);

	for (i = 3; i <= 98; ++i)
	{
		printf(", %jd", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
