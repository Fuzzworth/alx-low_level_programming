#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * Description: function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 *
 * @head: Pointer to the first Node
 *
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node_ptr, *temp_head_ptr;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	else
	{
		temp_head_ptr = *head;
		if (temp_head_ptr->next)
		{
			new_node_ptr = temp_head_ptr->next;
			*head = new_node_ptr;
			return (new_node_ptr->n);
		}
		else
		{
			return (0);
		}
	}
}
