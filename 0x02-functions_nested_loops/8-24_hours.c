#include "main.h"
/**
* jack_bauer - Program prints the lowercase alphabet 10 times
*
* Description: Program prints the lower case alphabet 10 times using
*  the _putchar function and an nested for loop and the ascii table
*  character
*
*/
void jack_bauer(void)
{
	int h_one;
	int h_two;
	int m_one;
	int m_two;

	int ascii_colon;

	ascii_colon = 58;

	for (h_one = 48; h_one <= 50; h_one++)
	{
		for (h_two = 48; h_two <= 57; h_two++)
		{
			if (h_one == 50 && h_two > 51)
			{
				break;
			}
			for (m_one = 48; m_one <= 53; m_one++)
			{
				for (m_two = 48; m_two <= 57; m_two++)
				{
					_putchar(h_one);
					_putchar(h_two);
					_putchar(ascii_colon);
					_putchar(m_one);
					_putchar(m_two);
					_putchar('\n');
				}
			}
		}
	}
}
