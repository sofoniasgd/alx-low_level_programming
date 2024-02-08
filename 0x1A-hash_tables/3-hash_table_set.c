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
	if (!key || !ht || !value)
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
	/* empty index, add node to index*/
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = node;
		node->next = NULL;
	}
	/*index not empty*/
	else
	{
		tmp = (ht->array)[index];
		/* '!' theres collision with identical key '!' */
		if (strcmp(tmp->key, key) == 0)
		{
			/*same key so free duplicate and free old value */
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			/* put new node at index and return.*/
			tmp = node;
		}
		/* '!' theres collision but not with identical key '!' */
		else if (strcmp(tmp->key, key) != 0)
		{
			/* add the new entry at start of list */
			node->next = tmp;
			tmp = node;
		}
	}
	return (1);
}
