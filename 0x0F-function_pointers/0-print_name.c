#include ""

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
	f(name);
}
