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

	for (digit_one = 48; digit_one < 58; digit_one++)
	{
		for (digit_two = 49; digit_two < 58; digit_two++)
		{
			if (digit_one < digit_two)
			{
				putchar(digit_one);
				putchar(digit_two);
				if ((digit_one + digit_two) != 113)
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
