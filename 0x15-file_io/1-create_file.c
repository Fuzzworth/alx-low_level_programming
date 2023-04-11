#include "main.h"

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

	if (filename == NULL)
		return (-1);
	ptr = fopen(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ptr == NULL)
	{
		return (-1);
	}
	if (text_content)
		if (fprintf(ptr, "%s", text_content))
			return (-1);
	fclose(ptr);
	return (1);
}
