#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char character = 'c';
int integer = 1;
long long_int = 1;
double long_long_int = 1;
float floater = 1.0;
printf("Size of a %s: %d byte(s)\n", "char", sizeof(character));
printf("Size of an %s: %d byte(s)\n", "int", sizeof(integer));
printf("Size of a %s: %d byte(s)\n", "long int", sizeof(long_int));
printf("Size of a %s: %d byte(s)\n", "long long int", sizeof(long_long_int));
printf("Size of a %s: %d byte(s)\n", "float", sizeof(floater));
return (0);
}
