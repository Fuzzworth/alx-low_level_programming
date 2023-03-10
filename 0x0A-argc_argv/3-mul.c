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
	if (argc == 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", ((int) argv[1]) * ((int) argv[2]));
	return (0);
}
