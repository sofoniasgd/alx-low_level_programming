#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table pointer
 * @key: the key to look for
 * Return: pointer  to value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht == NULL || index >= ht->size || key == NULL)
		return (NULL);
	/*find index at which key might be stored(using hash function)*/
	node = (ht->array)[index];
	/*traverse linked list and match key*/
	while (node != NULL)
	{
		if (strcmp((char *)key, node->key) == 0)
			return (node->value);
		if (node->next != NULL)
			node = node->next;
		else
			node = NULL;
	}
	return (NULL);
}
