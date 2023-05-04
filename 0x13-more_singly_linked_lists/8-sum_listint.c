#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 *
 * Description: function that returns the sum of all the data (n) of a
 * listint_t linked list
 *
 * @head: linked list
 *
 * Return: NULL or element
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
