#include <stdio.h>
/**
* main - Program prints the alphabet lowercase
*
* Description: Program prints lowercase characters of the aplphabet
* followed by a new line
*
* Return: 0 if execution has no errors
*/
int main(void)
{
	for (int alphabet = 97; alphabet < 123; alphabet++)
	{
		printf("%s", alphabet);
	}

	printf("\n");
	return (0);
}
