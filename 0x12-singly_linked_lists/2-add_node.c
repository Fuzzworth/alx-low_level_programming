#include "lists.h"

/**
 * add_node - short description
 *
 * Description: long description
 *
 * @head: argument_1 description
 * @str: argument_2 description
 *
 * Return: return description
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (0);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
