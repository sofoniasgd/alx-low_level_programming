#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hashtable pointer
 * @key: key
 * @value: data to store(associated with the key)
 * Return: 1 if succeds, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	hash_node_t *node, *tmp;

	/*check if key or value exists*/
	if (!key || !value)
		return (0);
	/* get index from djb2 hash function */
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	/*create node*/
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)key;
	node->value = (char *)value;
	/*find index and check if its empty or not*/
	if (!(ht->array)[index])
	{
		(ht->array)[index] = node;
		node->next = NULL;
	}
	else
	{
		tmp = (ht->array)[index];
		(ht->array)[index] = node;
		node->next = tmp;
	}
	return (1);
}
