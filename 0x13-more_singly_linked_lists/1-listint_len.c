#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * Description: function that returns the number of elements in a linked
 * listint_t list.
 *
 * @h: Head of linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes;

	for (number_of_nodes = 0; h; number_of_nodes++)
		h = h->next;
	return (number_of_nodes);
}
