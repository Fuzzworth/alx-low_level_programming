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
	int digit_three;

	for (digit_one = 48; digit_one < 58; digit_one++)
	{
		for (digit_two = 49; digit_two < 58; digit_two++)
		{
			for (digit_three = 50; digit_three < 58; digit_three++)
			{
				if (digit_one < digit_two && digit_one < digit_three)
				{
					putchar(digit_one);
					putchar(digit_two);
					putchar(digit_three);
					if ((digit_one + digit_two + digit_three) != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
