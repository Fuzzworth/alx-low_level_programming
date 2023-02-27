#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Password generator
 *
 * Description: program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0 for success
 */

int main(void)
{
	int password_length, index;
	time_t seconds;

	seconds = time(NULL);
	srand(seconds);
	password_length = (rand() % 130) + 20;

	for (index = 0; index <= password_length; index++)
	{
		printf("%c", (rand() % 93) + 34);
	}

	printf('\n');
	return (0);
}
