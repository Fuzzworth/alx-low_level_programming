#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * Description: function that returns the length of a string.
 *
 * @argument_1: argument_1 description
 *
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int length, index;
	char character;

	length = 0;
	character = s;

	for (index = 0; *(character + index) != '\0'; index++)
	{
		length++;
	}

	return (length);
}
