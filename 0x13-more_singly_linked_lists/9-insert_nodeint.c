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
	listint_t *new_node, *current_node;
	unsigned int position;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	current_node = *head;
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (position = 0; position < idx && current_node; position++)
	{
		if (position == (idx - 1))
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
	}
	free(new_node);
	return (NULL);
}
