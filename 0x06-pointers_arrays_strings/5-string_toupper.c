#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Description: function that changes all lowercase letters of a string to
 * uppercase
 *
 * @str: string input
 *
 * Return: return
 */

char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		index++;
	}

	return (str);
}
