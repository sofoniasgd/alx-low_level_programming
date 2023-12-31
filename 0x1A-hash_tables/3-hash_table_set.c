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
	if (!key || !value || !ht)
		return (0);
	/* get index from djb2 hash function */
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	if (index >= size)
		return (0);
	/*create node*/
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	/*find index and check if its empty or not*/
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = node;
		node->next = NULL;
	}
	else
	{
		tmp = (ht->array)[index];
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = node->value;
			return (1);
		}
		(ht->array)[index] = node;
		node->next = tmp;
	}
	return (1);
}
