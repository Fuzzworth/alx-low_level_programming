#include "lists.h"

/**
 * function_name - short description
 *
 * Description: long description
 *
 * @argument_1: argument_1 description
 * @argument_2: argument_2 description
 *
 * Return: return description
 */

size_t print_list(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s", h->len, h->str);
		else
			printf("%s ", "[0] (nil)");
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}
