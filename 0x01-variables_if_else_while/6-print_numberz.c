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
	int alphabet;

	for (alphabet = 48; alphabet < 58; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
