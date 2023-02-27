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

	length = 0;

	for (index_one = 0; *(s + index_one) != '\0'; index_one++)
	{
		length++;
	}

	char t[length] = s;

	for (index_two = (length - 1); index_two >= 0; index_two--)
	{
		*(t + ((length - 1) - index_two)) = (*(s + index_two));
	}

	*s = *t;
}
