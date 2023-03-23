#include "3-calc.h"

/**
 * get_op_func - short description
 *
 * Description: long description
 *
 * @a: argument_1 description
 * @b: argument_2 description
 * @s: argument_3 description
 *
 * Return: void
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
 
	while (i < 6)
	{
		if (s != 0 && s[0] == ops[i])
			return ops[i].f;
	}
	return (NULL);
}
