#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * Description: function that frees a listint_t list
 *
 * @head: head of linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t next_node;

	if (head == NULL)
		return;

	for (next_node = *head; next_node; next_node = next_node.next)
	{

	}
}
