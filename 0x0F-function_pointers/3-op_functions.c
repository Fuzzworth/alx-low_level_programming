#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - short description
 *
 * Description: long description
 *
 * @a: argument_1 description
 * @b: argument_2 description
 *
 * Return: return description
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - short description
 *
 * Description: long description
 *
 * @a: argument_1 description
 * @b: argument_2 description
 *
 * Return: return description
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - short description
 *
 * Description: long description
 *
 * @a: argument_1 description
 * @b: argument_2 description
 *
 * Return: return description
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - short description
 *
 * Description: long description
 *
 * @a: argument_1 description
 * @b: argument_2 description
 *
 * Return: return description
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - short description
 *
 * Description: long description
 *
 * @a: argument_1 description
 * @b: argument_2 description
 *
 * Return: return description
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
