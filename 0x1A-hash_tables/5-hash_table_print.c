#include "hash_tables.h"

/**
 * hash_table_print - short description
 *
 * Description: long description
 *
 * @ht: argument_1 description
 *
 * Return: return description
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int array_index;
	int is_first;

	printf("{");
	for (array_index = 0; array_index < ht->size; array_index++)
	{
		if ((ht->array)[array_index] == NULL)
			continue;
		current_node = (ht->array)[array_index];
		is_first = 1;
		while (current_node)
		{
			if (!is_first)
				printf(", ");
			printf("\'%s\': \'%s\'", current_node->key,
					current_node->value);
			is_first = 0;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
