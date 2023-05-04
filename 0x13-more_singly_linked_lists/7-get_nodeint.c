#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * Description: function that returns the nth node of a listint_t linked
 * list.
 *
 * @head: linked list
 * @index: index
 *
 * Return: NULL or element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position;

	if (head == NULL)
		return (NULL);
	for (position = 0; position <= index && head; position++)
	{
		if (position == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
