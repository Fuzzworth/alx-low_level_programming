#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * Description: function that returns the nth node of a listint_t linked
 * list.
 *
 * @head: linked list
 * @idx: the index of the list where the new node should be added
 * @n: number
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *previous_node, *current_node, *next_node;
	unsigned int position;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	current_node = *head;
	next_node = current_node->next;
	previous_node = NULL;
	for (position = 0; position <= idx && current_node; position++)
	{
		if (position == idx)
		{
			new_node->n = n;
			next_node = current_node;
			if (previous_node != NULL)
				previous_node->next = new_node;
			new_node->next = next_node;
			return (new_node);
		}
		previous_node = current_node;
		current_node = current_node->next;
		next_node = current_node->next;
	}
	free(new_node);
	return (NULL);
}
