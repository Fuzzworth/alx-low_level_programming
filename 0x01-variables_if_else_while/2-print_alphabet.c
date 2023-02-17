#include <stdio.h>
/**
* main - Program prints the alphabet lowercase
*
* Description: Program prints lowercase characters of the aplphabet
* followed by a new line using only putchar and a for loop to
* iterate over the ascii alphabet
*
* Return: 0 if execution has no errors
*/
int main(void)
{
	char alphabet;

	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
