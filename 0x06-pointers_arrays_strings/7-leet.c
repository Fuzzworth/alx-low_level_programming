#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * Description: function that encodes a string into 1337
 * uppercase
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
		switch (str[index])
		{
			case 'a':
			case 'A':
				str[index] = '4';
				break;
			case 'e':
			case 'E':
				str[index] = '3';
				break;
			case 'o':
			case 'O':
				str[index] = '0';
				break;
			case 't':
			case 'T':
				str[index] = '7';
				break;
			case 'l':
			case 'L':
				str[index] = '1';
				break;
		}
		index++;
	}
	return (str);
}
