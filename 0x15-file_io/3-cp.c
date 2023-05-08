#include "main.h"
/**
 * close_error_handler - function to handle close errors
 *
 * Description: function to handle close errors
 *
 * @source_file: source file
 * @destination_file: destination_file
 * @code: code to be processed
 *
 * Return: void
 */
void close_error_handler(int code, int source_file,
		int destination_file)
{
	if (code == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}
	code = close(destination_file);
	if (code == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_file);
		exit(100);
	}
}

/**
 * error_handler - function to handle file errors
 *
 * Description: function to handle file errors
 *
 * @source_file: source_file
 * @destination_file: destination_file
 * @argument_values: arguments values
 *
 * Return: void
 */
void error_handler(int source_file, int destination_file,
		char *argument_values[])
{
	if (source_file == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argument_values[1]);
		exit(98);
	}
	if (destination_file == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argument_values[2]);
		exit(99);
	}
}

/**
 * main - program that copies the content of a file to another file.
 *
 * Description: program that copies the content of a file to another file.
 *
 * @argument_count: number of arguments.
 * @argument_values: arguments array.
 *
 * Return: 0 for sucess anything else is an error
 */
int main(int argument_count, char *argument_values[])
{
	int source_file, destination_file, close_code;
	char file_buffer[BUFFER_SIZE];
	ssize_t number_of_characters_read, number_of_characters_written;

	if (argument_count != ARGUMENT_COUNT_EXPECTED)
	{
		dprintf(STDERR_FILENO, "%s\n",
				"Usage: cp source_file destination_file");
		exit(97);
	}
	source_file = open(argument_values[1], O_RDONLY);
	destination_file = open(argument_values[2], O_CREAT | O_WRONLY
			| O_TRUNC | O_APPEND, 0664);
	error_handler(source_file, destination_file, argument_values);
	number_of_characters_read = BUFFER_SIZE;
	while (number_of_characters_read == BUFFER_SIZE)
	{
		number_of_characters_read = read(source_file,
				file_buffer, BUFFER_SIZE);
		if (number_of_characters_read == FILE_ERROR)
			error_handler(FILE_ERROR, 0, argument_values);
		number_of_characters_written = write(destination_file,
				file_buffer, number_of_characters_read);
		if (number_of_characters_written == FILE_ERROR)
			error_handler(0, FILE_ERROR, argument_values);
	}
	close_code = close(source_file);
	close_error_handler(close_code, source_file, destination_file);
	return (0);
}
