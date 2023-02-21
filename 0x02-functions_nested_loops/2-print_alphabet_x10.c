#include "main.h"
/**
 print_alphabet - Program prints the lowercase alphabet 10 times
*
* Description: Program prints the lower case alphabet 10 times using
*  the _putchar function and an nested for loop and the ascii table
*  character
*
*/
void print_alphabet_x10(void)
{
	int ascii_character;
	int iteration;

	for (iteration = 1; iteration <= 10; iteration++)
	{
		for (ascii_character = 97; ascii_character < 123; ascii_character++)
		{
			_putchar(ascii_character);
		}
		_putchar('\n');
	}
}
