#include <stdio.h>
/**
* main - Program prints the alphabet lowercase except e and q
*
* Description: Program prints all lowercase characters of the aplphabet
* except e and q followed by a new line using only putchar and a for loop to
* iterate over the ascii alphabet
*
* Return: 0 if execution has no errors
*/
int main(void)
{
	char alphabet;

	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		if (alphabet != 101 && alphabet != 113)
		{
			putchar(alphabet);
		}
	}

	putchar('\n');
	return (0);
}
