#include "hash_tables.h"

/**
 * key_index - Function that prints the idx at which a value exists
 * @key: The idx key
 * @size: The array size to hash tables
 * Return: The idx of the key
 * Description: It uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
