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
	int length,index;

	length = 0;

	for (index = 0; *(s + index) != '\0'; index++)
	{
		length++;
	}

	return (length);
}
