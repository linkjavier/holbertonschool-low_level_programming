#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: is the size of the array.
 * Return: a pointer to the newly created hash table or NULL.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = NULL;
	hash_node_t **new = NULL;

	if (size <= 0)
		return (NULL);

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	new = calloc(size, sizeof(char *));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	hash_t->size = size;
	hash_t->array = new;
	return (hash_t);
}
