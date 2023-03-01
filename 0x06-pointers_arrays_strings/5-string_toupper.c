#include "main.h"

/**
 * function_name - changes all lowercase letters of a string to uppercase
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
			s[index] = str[index] - 32;
		index++;
	}
}
