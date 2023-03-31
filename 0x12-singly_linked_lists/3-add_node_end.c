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
	list_t *new, *currnet_node;

	currnet_node = *head;

	new = (list_t *) malloc(sizeof(list_t));

	while (currnet_node->next != 0)
	{
		printf("[%d] %s", currnet_node->len, currnet_node->str);
		currnet_node = currnet_node->next;
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
