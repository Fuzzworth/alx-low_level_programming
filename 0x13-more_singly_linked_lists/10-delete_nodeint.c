#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 *
 * Descripton: function that deletes the node at index index of a
 * listint_t linked list.
 *
 * @index: the index of the node that should be deleted. Index starts at 0
 * @head: list
 *
 * Return: 1 succes, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node, *current_node;
	unsigned int position;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}
	for (position = 0; current_node && (position <= index); position++)
	{
		if (position == index)
		{
			previous_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		else
		{
			previous_node = current_node;
			current_node = current_node->next;
		}
	}
	return (-1);
}
