#include "hash_tables.h"
/**
 * key_index - This function gives you the index of a key.
 * @key: The key.
 * @size: The size of the array of hash table
 * Return:Index of key stored in the array of hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
