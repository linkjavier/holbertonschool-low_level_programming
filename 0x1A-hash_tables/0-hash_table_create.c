#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: is the size of the array.
 * Return: a pointer to the newly created hash table or NULL.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tab = NULL;
	hash_node_t **new_array = NULL;

	if (size <= 0)
		return (NULL);

	hash_tab = malloc(sizeof(hash_table_t));
	if (hash_tab == NULL)
		return (NULL);

	new_array = calloc(size, sizeof(char *));
	if (new_array == NULL)
	{
		free(new_array);
		return (NULL);
	}

	hash_tab->size = size;
	hash_tab->array = new_array;
	return (hash_tab);
}
