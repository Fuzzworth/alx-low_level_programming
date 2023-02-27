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
	char temp;

	length = 0;

	for (index_one = 0; *(s + index_one) != '\0'; index_one++)
	{
		length++;
	}

	if (length % 2 != 0)
	{
		for (index_two = (length - 1); index_two > (length / 2); index_two--)
		{
			temp = *(s + index_two);
			*(s + index_two) = *(s + ((length - 1) - index_two));
			*(s + ((length - 1) - index_two)) = temp;
		}
	}
	else
	{
		for (index_two = (length - 1); index_two >= (length / 2); index_two--)
		{
			temp = *(s + index_two);
			*(s + index_two) = *(s + ((length - 1) - index_two));
			*(s + ((length - 1) - index_two)) = temp;
		}
	}
}
