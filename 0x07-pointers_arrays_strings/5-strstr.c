#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * Description: function that locates a substring
 *
 * @haystack: string to search
 * @needle: characters string to look out for
 *
 * Return: pointer to the byte in s that matches one of the bytes in needle,
 * string or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int n_index, h_index, is_match;

	for (h_index = 0; haystack[h_index] != '\0' ; h_index++)
	{
		if (haystack[h_index] == needle[0])
		{
			is_match = 1;
			for (n_index = 0; needle[n_index] != '\0'; n_index++)
			{
				if (haystack[h_index + n_index] == '\0'
						|| haystack[h_index + n_index] != needle[n_index])
				{
					is_match = 0;
					break;
				}
			}

			if (is_match)
				return (haystack + h_index);
			else
				h_index += n_index;

		}

	}

	return (0);
}
