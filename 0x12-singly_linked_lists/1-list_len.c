#include "lists.h"

/**
 * list_len - short description
 *
 * Description: long description
 *
 * @h: argument_1 description
 *
 * Return: return description
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;

	while (h)
	{
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}
