#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if ((ht->array)[i] != NULL)
			free((ht->array)[i]);
	}
	free(ht->array);
	free(ht);
}
