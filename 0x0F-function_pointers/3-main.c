#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

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
	int a, b;
	void (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (op == 0)
		printf("Error\n");
	printf("%d\n", (int) op(a, b));

	return (0);
}
