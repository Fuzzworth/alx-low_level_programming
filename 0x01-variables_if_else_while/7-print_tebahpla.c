#include <stdio.h>
/**
* main - Program prints the alphabet lowercase in reverse
*
* Description: Program prints lowercase characters of the aplphabet
* followed by a new line using only putchar and a for loop to
* iterate over the ascii alphabet in reverse
*
* Return: 0 if execution has no errors
*/
int main(void)
{
	char alphabet;

	for (alphabet = 122; alphabet > 96; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
