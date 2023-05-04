#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * Description: function that reverses a listint_t linked list.
 *
 * @head: list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previvious_node, *next_node = NULL;

	for (; *head; *head = next_node)
	{
		next_node = (*head)->next;
		(*head)->next = previvious_node;
		previvious_node = *head;
	}
	*head = previvious_node;
	return (*head);
}
