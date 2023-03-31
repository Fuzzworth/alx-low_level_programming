#include "lists.h"

/**
 * add_node_end - short description
 *
 * Description: long description
 *
 * @head: argument_1 description
 * @str: argument_2 description
 *
 * Return: return description
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current_node;

	current_node = *head;

	if (head == 0)
		return (0);
	new = (list_t *) malloc(sizeof(list_t));

	while (current_node)
	{
		printf("[%d] %s", current_node->len, current_node->str);
	}

	if (new == NULL)
	{
		printf("Error\n");
		return (0);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = 0;

	return (0);
}
