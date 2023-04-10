#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - short description
 *
 * Description: long description
 *
 * @filename: argument_1 description
 * @letters: argument_2 description
 *
 * Return: return description
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t number_of_characters_printed;
	int character_to_print;
	FILE *fp;

	number_of_characters_printed = 0;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		exit(1);
	}

	character_to_print = fgetc(fp);
	while (number_of_characters_printed <= letters)
	{
		if (number_of_characters_printed == letters || character_to_print == -1)
		{
			fclose(fp);
			return (number_of_characters_printed);
		}
		printf("%c", character_to_print);
		number_of_characters_printed++;
		character_to_print = fgetc(fp);
	}

	fclose(fp);
	return (number_of_characters_printed);
}
