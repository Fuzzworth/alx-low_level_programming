#include "hash_tables.h"

/**
 * hash_table_set - short description
 *
 * Description: long description
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: return description
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *old_head;

	if (key == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);

	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	new_node->key = (char *) key;
	new_node->value = (char *) value;
	new_node->next = NULL;
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = (hash_node_t *) malloc(sizeof(hash_node_t));
		if ((ht->array)[index] == NULL)
			return (0);
		(ht->array)[index] = new_node;
		return (1);
	}
	old_head = (ht->array)[index];
	new_node->next = old_head;
	(ht->array)[index] = new_node;
	return (1);
}
