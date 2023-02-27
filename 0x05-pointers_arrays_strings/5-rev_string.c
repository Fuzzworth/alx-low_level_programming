#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * Description: function that reverses a string.
 *
 * @s: String pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int index_one, index_two, length;
	char *t;

	length = 0;
	t = s;

	for (index_one = 0; *(s + index_one) != '\0'; index_one++)
	{
		length++;
	}
	for (index_two = (length - 1); index_two >= 0; index_two--)
	{
		*(t + ((length) - index_two)) = (*(s + index_two));
	}

	*(t + length) = '\0';
	*s = *t;
}
