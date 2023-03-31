#include "lists.h"

/**
 * free_list - short description
 *
 * Description: long description
 *
 * @head: argument_1 description
 *
 * Return: return description
 */

void free_list(list_t *head)
{
	list_t *previous;

	previous = NULL;
	while (head)
	{
		free(head->str);
		previous = head;
		head = head->next;
		free(previous);
	}
}
