#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * Description: unction that adds a new node at the beginning of a
 * listint_t list
 *
 * @head: Pointer to the first Node
 * @n: Integer to place within node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t new_node;
	listint_t *new_node_ptr, *temp_head_ptr;

	new_node_ptr = &new_node;
	new_node.n = n;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node.next = NULL;
		*head = new_node_ptr;
	}
	else
	{
		temp_head_ptr = *head;
		new_node.next = temp_head_ptr;
		*head = new_node_ptr;
	}
	return (*head);
}
