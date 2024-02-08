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
	hash_node_t *node, *walker;

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
	node->next = NULL;
	/* empty index, add node to index*/
	if ((ht->array)[index] == NULL)
		(ht->array)[index] = node;
	else
	{
		/*'!'check for collision with identical key by walking the linked list'!'*/
		walker = (ht->array)[index];
		while (walker != NULL)
		{
			if (strcmp(walker->key, key) == 0)
			{
				/*same key so update its value and free node */
				walker->value = strdup(value);
				free(node);
				return (1);
			}
			walker = walker->next;
		}
		/* add the new entry at start of list */
		node->next = (ht->array)[index];
		(ht->array)[index] = node;
	}
	return (1);
}
