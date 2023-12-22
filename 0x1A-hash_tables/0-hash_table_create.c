#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);
	/*first creating hash table data structure*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	/*create hash table array pointer*/
	table->array = malloc(sizeof(hash_node_t *) * table->size);
	if (table->array == NULL)
		return (NULL);
	return (table);
}
