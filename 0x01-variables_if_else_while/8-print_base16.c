#include <stdio.h>
/**
* main - Program prints the hex characters
*
* Description: Program prints hex characters of the aplphabet
* then finally a new line using only and a for loop to iterate over 
* the ascii alphabet
*
* Return: 0 if execution has no errors
*/
int main(void)
{
	char alphabet;
	/* print lowercase characters */
	for (alphabet = 48; alphabet < 58; alphabet++)
	{
		putchar(alphabet);
	}
	/* print uppercase characters */
	for (alphabet = 65; alphabet < 103; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
