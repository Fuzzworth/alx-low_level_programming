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

	ptr = fopen(filename, "w");
	if (ptr == NULL)
	{
		return (-1);
	}
	fclose(ptr);
	return (1);
}
