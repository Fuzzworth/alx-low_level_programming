#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
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
	listint_t *new_node, *previous_node;
	unsigned int position;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	for (position = 0; position <= idx && *head; position++)
	{
		if (position == idx)
		{
			new_node->n = n;
			if (previous_node != NULL)
				new_node->next = (*head)->next;
			if (position > 0)
				previous_node->next = new_node;
			return (new_node);
		}
		previous_node = *head;
		*head = (*head)->next;
	}
	return (NULL);
}
