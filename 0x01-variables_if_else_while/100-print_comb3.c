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
	int character_one;
	int character_two;

	for (character_one = 48; character_one < 58; character_one++)
	{
		for (character_two = 49; character_two < 58; character_two++)
		{
			if (character_one <= character_two)
			{
				putchar(character_one);
				putchar(character_two);
				if (character_one != 57 && character_two != 57)
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
