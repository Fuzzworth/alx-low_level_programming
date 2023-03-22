#include "function_pointers.h"

/**
 * print_name - short description
 *
 * Description: long description
 *
 * @name: name string
 * @f: function pointer
 *
 * Return: return description
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
