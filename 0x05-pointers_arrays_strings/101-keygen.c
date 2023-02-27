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
	time_t seconds;

	seconds = time(NULL);
	/* Intializes random number generator */
	srand(seconds);
	printf("%c\n", (rand() % 93) + 34);
	return (0);
}
