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
	int digit_one;
	int digit_two;

	for (digit_one = 0; digit_one < 100; digit_one++)
	{
		for (digit_two = 0; digit_two < 100; digit_two++)
			if (digit_one < digit_four)
			{
				putchar((digit_one / 10) + 48);
				putchar((digit_one % 10) + 48;
				putchar(' ');
				putchar((digit_two / 10) + 48);
				putchar((digit_two % 10) + 48);
				if (digit_one != 98 || digit_two != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
