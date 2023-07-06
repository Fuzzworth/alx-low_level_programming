#include "hash_tables.h"

/**
 * function_name - function that gives you the index of a key
 *
 * Description: function that gives you the index of a key
 *
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_results;

	hash_results = hash_djb2(key);

	return hash_results % size;
}
