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
	printf("%d\n", srand(seconds));
	return (0);
}
