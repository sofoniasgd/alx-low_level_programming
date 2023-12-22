#include "hash_tables.h"

/**
 * key_index - returns index for hash trable of a key
 * @key: key pointer(unsigned char *)
 * @size: size of hash table
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ret = 0;

	ret = hash_djb2(key) % size;
	return (ret);
}
