#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *node, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i] != NULL)
		{
			node = (ht->array)[i];
			/*check for linked list, then walk the list and free every node*/
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				count++;
				node = tmp;
			}
		}
	}
	free(ht->array);
	count++;
	free(ht);
	count++;
}
