#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * Description: function that prints all the elements of a listint_t list
 *
 * @h: Head of linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes;

	for (number_of_nodes = 0; h->next; number_of_nodes++)
		printf("%d\n", h->n);
	return (number_of_nodes);
}
