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
	listint_t *previous_node, *next_node;

	if (head == NULL)
		return;

	previous_node = head;
	next_node = previous_node->next;
	do
	{
		free(previous_node);
		previous_node = next_node;
		next_node = previous_node->next;
	} while (next_node);
}
