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
	printf("%d\n", srand(time(NULL)));
	return (0);
}
