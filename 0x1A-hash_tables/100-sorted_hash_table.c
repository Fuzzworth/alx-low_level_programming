#include "hash_tables.h"

/**
 * shash_table_create - function that creates a hash table
 *
 * Description: function that creates a hash table
 *
 * @size: the size of the array
 *
 * Return: return NULL or Hash Table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int index;

	new_table = (shash_table_t *) malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = (shash_node_t **) malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		(new_table->array)[index] = NULL;
	return (new_table);
}

/**
 * shash_insert_into_sorted_list - inserts into sorted list
 *
 * Description: inserts into buckets
 *
 * @ht: Sorted hash table
 * @key: key
 * @value: value
 * @index: index
 * @new_node: new node
 *
 * Return 1 if success 0 if failure
 */
int shash_insert_into_sorted_list(shash_table_t *ht, const char *key,
		const char * value, unsigned long int index,
		shash_node_t *new_node)
{
	shash_node_t *old_head = NULL;

	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_node;
		return (1);
	}
	else
	{
		old_head = (ht->array)[index];
		while (old_head)
		{
			if (strcmp(old_head->key, key) == 0)
			{
				free(old_head->value);
				old_head->value = (char *) strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			old_head = old_head->next;
		}
		old_head = (ht->array)[index];
		new_node->next = old_head;
		(ht->array)[index] = new_node;
		return (1);
	}
}

/**
 * shash_insert_into_array - inserts into array
 *
 * Description: inserts into buckets
 *
 * @ht: Sorted hash table
 * @key: key
 * @value: value
 * @index: index
 * @new_node: new node
 *
 * Return 1 if success 0 if failure
 */
int shash_insert_into_array(shash_table_t *ht, const char *key,
		const char * value, unsigned long int index,
		shash_node_t *new_node)
{
	shash_node_t *old_head = NULL;

	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_node;
		return (1);
	}
	else
	{
		old_head = (ht->array)[index];
		while (old_head)
		{
			if (strcmp(old_head->key, key) == 0)
			{
				free(old_head->value);
				old_head->value = (char *) strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			old_head = old_head->next;
		}
		old_head = (ht->array)[index];
		new_node->next = old_head;
		(ht->array)[index] = new_node;
		return (1);
	}
}

/**
 * shash_table_set - short description
 *
 * Description: long description
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: return description
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *new_node = NULL, *old_head = NULL;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	new_node = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	new_node->key = (char *) strdup(key);
	new_node->value = (char *) strdup(value);
	new_node->next = new_node->snext = new_node->sprev = NULL;
	shash_insert_into_array(ht, key, value, index, new_node);

}
