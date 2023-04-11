#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - short description
 *
 * Description: long description
 *
 * @filename: argument_1 description
 * @text_content: argument_2 description
 *
 * Return: return description
 */

int create_file(const char *filename, char *text_content)
{
	FILE *ptr;

	if (filename == NULL || text_content == NULL)
		return (-1);
	ptr = fopen(filename, "w");
	if (ptr == NULL)
	{
		return (-1);
	}
	fputs(text_content, ptr);
	fclose(ptr);
	return (1);
}
