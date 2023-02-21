#include "main.h"
/**
* print_alphabet - Program prints the lowercase alphabet
*
* Description: Program prints the lower case alphabet using
* _puthchar and a for loop over the ascii table character set
*
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
