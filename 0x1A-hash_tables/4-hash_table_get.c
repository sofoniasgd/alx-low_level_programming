#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table pointer
 * @key: the key to look for
 * Return: pointer  to value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, index;
	hash_node_t *node;

	index = key_index((const unsigned char *)key, ht->size);
	for (i = 0; i < ht->size; i++)
	{
		/*find index at which key might be stored(using hash function)*/
		if (i == index)
		{
			node = (ht->array)[i];
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
		}
	}
	return (NULL);
}
