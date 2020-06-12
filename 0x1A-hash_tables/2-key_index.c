#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 * @key: Is the key.
 * @size: Size of the array of the hash table
 * Return: Index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (!key || !size || size < 1)
		return (0);
	hash = hash_djb2(key);
	return (hash % size);
}
