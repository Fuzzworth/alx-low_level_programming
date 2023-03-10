#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 *
 * Description: prints its name, followed by a new line
 *
 * @argc: number of arguments
 * @argv: Command line arguments
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);
	return (0);
}
