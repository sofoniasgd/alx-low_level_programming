#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table pointer
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t node;
	if (ht == NULL)
		exit(EXIT_FAILURE);
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i])
		{
			node = (ht->array)[i];
			while (node->next != NULL)
			{
				printf("'%s': '%s', ", node->key, node->value);
			}
			printf("'%s': '%s'", node->key, node->value);
		}
	}
	printf("}\n")
}
