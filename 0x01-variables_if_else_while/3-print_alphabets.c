#include <stdio.h>
/**
* main - Program prints the alphabet in lower then upper cases
*
* Description: Program prints lowercase characters of the aplphabet
* followed by uppercase characters then finally a new line using only 
* putchar and a for loop to iterate over the ascii alphabet
*
* Return: 0 if execution has no errors
*/
int main(void)
{
	char alphabet;
	/* print lowercase characters */
	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		putchar(alphabet);
	}
	/* print uppercase characters */
	for (alphabet = 65; alphabet < 91; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
