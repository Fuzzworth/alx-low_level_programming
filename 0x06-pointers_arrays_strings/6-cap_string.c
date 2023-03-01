#include "main.h"

/**
 * cap_string - changes all lowercase letters of a string to uppercase
 *
 * Description: function that changes all lowercase letters of a string to
 * uppercase
 *
 * @str: string input
 *
 * Return: return
 */

char *cap_string(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z' && index == 0)
			str[index] = str[index] - 32;

		if (str[index] >= 'a' && str[index] <= 'z' && index > 0)
		{
			switch (str[index - 1])
			{
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
				case ' ':
				case '\n':
				case '\t':
					str[index] = str[index] - 32;
					break;
			}
		}
		index++;
	}
	return (str);
}
