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

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	current_node = *head;

	if (current_node == NULL)
		return (new);

	while (current_node->next != 0)
	{
		printf("[%d] %s\n", current_node->len, current_node->str);
		current_node = current_node->next;
	}
	current_node->next = new;

	return (new);
}
