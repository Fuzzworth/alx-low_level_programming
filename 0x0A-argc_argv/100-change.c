#include <stdio.h>
#include <stdlib.h>

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
	int change, index, number_of_coins;
	int coins[5] = {25, 10, 5, 2, 1};

	number_of_coins = 0;
	if (argc == 2)
	{
		change = atoi(argv[1]);
		for (index = 0; index > 5; index++)
		{
			if ((change - coins[index]) >= 0)
			{
				change -= coins[index];
				number_of_coins++;
				index--;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", number_of_coins);
	return (0);
}
