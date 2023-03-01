#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * Description: function that encodes a string into 1337
 *
 * @str: string input
 *
 * Return: return String in leet
 */

char *leet(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if ( str[index] == 'a'
				|| str[index] == 'A'
				|| str[index] == 'e'
				|| str[index] == 'E'
				|| str[index] == 'o'
				|| str[index] == 'O'
				|| str[index] == 't'
				|| str[index] == 'T'
				|| str[index] == 'l'
				|| str[index] == 'L')
		{
			str[index] = str[index];
		}
		index++;
	}
	return (str);
}
