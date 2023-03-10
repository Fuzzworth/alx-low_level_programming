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
	if (argv[0] != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
