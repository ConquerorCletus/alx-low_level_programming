#include "hash_tables.h"
/**
* hash_table_set- This function adds element to the hash
* table.
* @ht:hash table to be added to.
* @key: The key
* @value: Value associated with the key.
* Return: 1 if successful otherwise 0.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *newNode = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];

	/* Compare key with existing keys */
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	/*if key exists update value */
	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	/* add new node if key not found */

	newNode = malloc(sizeof(*newNode));
	if (newNode == false)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	newNode->next = ht->array[i];
	ht->array[i] = newNode;

	return (1);
}
