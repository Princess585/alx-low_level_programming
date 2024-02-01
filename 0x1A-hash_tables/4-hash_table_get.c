#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieve the val to a hash table
 * @ht: A ptr to the hash table
 * @key: The key value to hash table
 * Return: NULL if not mached, and value of key otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
