#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 *
 * Description: function that encodes a string using rot13
 *
 * @str: string input
 *
 * Return: return ROT13 String
 */

char *rot13(char *str)
{
	int index_one, index_two;

	char *key = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *value = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index_one = 0; str[index_one] != '\0'; index_one++)
	{
		for (index_two = 0; index_two < 52; index_two++)
		{
			if (str[index_one] == key[index_two])
			{
				str[index_one] = value[index_two];
				break;
			}
		}
	}
	return (str);
}
