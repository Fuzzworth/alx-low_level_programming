#include "main.h"
/**
* main - Program prints _putchar, followed by a new line.
*
* Description: Program prints _putchar, followed by a new line.
*
* Return: 0 if execution has no errors
*/
void print_alphabet(void)
{
	int ascii_character;

	for (ascii_character = 97; ascii_character < 123; ascii_character++)
	{
		_putchar(ascii_character);
	}
	_putchar('\n');
}
