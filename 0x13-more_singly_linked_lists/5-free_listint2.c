#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * Description: function that frees a listint_t list
 *
 * @head: head of linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *previous_node, *next_node;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	previous_node = *head;
	next_node = previous_node->next;
	while (next_node)
	{
		free(previous_node);
		previous_node = next_node;
		next_node = next_node->next;
	}
	if (previous_node != NULL)
		free(previous_node);
	if (next_node != NULL)
		free(next_node);
}
