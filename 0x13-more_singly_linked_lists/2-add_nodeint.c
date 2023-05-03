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
	listint_t *new_node_ptr, *temp_head_ptr;

	new_node_ptr = (listint_t *) malloc(sizeof(listint_t));

	if (new_node_ptr == NULL)
		return (NULL);

	if (head == NULL)
	{
		free(new_node_ptr);
		return (NULL);
	}
	if (*head == NULL)
	{
		new_node_ptr->next = NULL;
		*head = new_node_ptr;
	}
	else
	{
		temp_head_ptr = *head;
		new_node_ptr->next = temp_head_ptr;
		*head = new_node_ptr;
	}
	return (*head);
}
