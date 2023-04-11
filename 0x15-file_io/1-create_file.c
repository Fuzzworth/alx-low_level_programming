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
	int ptr;

	if (filename == NULL)
		return (-1);
	ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ptr == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";

	if (write(ptr, text_content, strlen(text_content)) == (ssize_t) -1)
		return (-1);
	close(ptr);
	return (1);
}
