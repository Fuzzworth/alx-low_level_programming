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
	int s_index, accept_index, number_of_matches, last_match, max_match, is_found;

	max_match = number_of_matches = 0;
	last_match = -1;

	if (s[0] == '\0' || accept[0] == '\0')
		return (max_match);

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		is_found = 0;
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
			if (s[s_index] == accept[accept_index] && last_match == (s_index - 1))
			{
				number_of_matches++;
				is_found = 1;
			}
			else if (s[s_index] == accept[accept_index] && last_match != (s_index - 1))
			{
				number_of_matches = 1;
				is_found = 1;
			}

			if (is_found)
			{
				last_match = s_index;
				if (max_match < number_of_matches)
					max_match = number_of_matches;
				break;
			}
		}
	}

	return (max_match);
}
