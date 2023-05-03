#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * Description: function that adds a new node at the end of a listint_t
 * list
 *
 * @head: pointer to linked list head
 * @n: node element
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_ptr, *temp_tail_ptr;
	size_t number_of_nodes;

	new_node_ptr = (listint_t *) malloc(sizeof(listint_t));

	if (new_node_ptr == NULL)
		return (NULL);
	new_node_ptr->n = n;
	new_node_ptr->next = NULL;
	if (head == NULL)
	{
		free(new_node_ptr);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node_ptr;
	}
	else
	{
		number_of_nodes = listint_len(*head);
		temp_tail_ptr = head[number_of_nodes];
		temp_tail_ptr->next = new_node_ptr;
	}
	return (new_node_ptr);
}
