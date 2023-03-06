#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * Description: function that gets the length of a prefix substring
 *
 * @s: string to search
 * @accept: characters to look out for
 *
 * Return: the ocurences of the charecters in the accept string
 */

unsigned int _strspn(char *s, char *accept)
{
	int s_index, accept_index, number_of_matches, last_match;

	number_of_matches = 0;
	last_match = -1;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
			if (s[s_index] == accept[accept_index] && last_match == (s_index - 1))
			{
				number_of_matches++;
				last_match = s_index;
				break;
			}
			else if (s[s_index] == accept[accept_index] && last_match != (s_index - 1))
			{
				number_of_matches = 1;
				last_match = s_index;
				break;
			}
		}
	}

	return (number_of_matches);
}
