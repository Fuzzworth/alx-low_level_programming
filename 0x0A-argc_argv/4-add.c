#include <stdio.h>
#include <stdlib.h>

int isdigit(int n)
{
	return ((n >= '0' && n <= '9') || n == '-' || n == '+');
}

int isNumber(char *s)
{
	int i, isD;

	isD = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		isD = isdigit(s[i]);
		if (!isD)
			return (0);
	}
	return (1);
}

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
	int sum, index;

	sum = 0;

	if (argc == 1)
	{
		sum = 0;
	}
	else
	{
		for (index = 1; index < argc; index++)
		{
			if (isNumber(argv[index]))
			{
				sum += atoi(argv[index]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
