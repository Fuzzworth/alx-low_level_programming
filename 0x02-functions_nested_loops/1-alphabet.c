#include "main.h"
/**
* main - Program prints _putchar, followed by a new line.
*
* Description: Program prints _putchar, followed by a new line.
*
* Return: 0 if execution has no errors
*/
int main(void)
{
	int ascii_character;

	for (ascii_character = 96; ascii_character < 129; ascii_character++)
	{
		_putchar(ascii_character);
	}
	_putchar('\n');
	return (0);
}
