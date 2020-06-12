#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned int i = 0;

	if (size)
	{
		new = malloc(sizeof(hash_table_t));
		if (new == NULL)
			return (NULL);
		new->size = size;
		new->array = malloc(sizeof(hash_node_t) * size);
		if (new->array == NULL)
		{
			free(new);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			new->array[i] = NULL;
	}
	return (new);
}
#include "hash_tables.h"
/**
 * hash_djb2 - hash function that takes key and converts to hash
 * @str: (string) key
 * Return: hash derived from key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: (string) key
 * @size: size of array
 * Return: Index of where the key goes in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: Structure that holds Hash array and size of hash array
 * @key: The key
 * @value: Value
 * Return: 0 if failed else 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_h, *node;
	char *dob_key, *dob_value;

	/* arguments checks */
	if (key == NULL || ht == NULL || ht->size == 0 || ht->array == NULL
			|| strlen(key) == 0 || value == NULL)
		return (0);

	dob_key = strdup(key);
	dob_value = strdup(value);
	node = malloc(sizeof(hash_node_t));

	if (dob_key == NULL || dob_value == NULL || node == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	new_h = ht->array[index];
	for (; new_h; new_h = new_h->next)
		if (strcmp(new_h->key, key) == 0)
		{
			free(node), free(dob_key);
			free(new_h->value);
			new_h->value = dob_value;
			break;
		}
	if (new_h == NULL)
	{
		node->key = dob_key;
		node->value = dob_value;
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: structure that holds Hash array and size of hash array
 * @key: string(key)
 * Return: Value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *new_h;

	if (ht == NULL || ht->array == NULL || ht->size == 0
			|| key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *) key, ht->size);
	new_h = ht->array[i];
	for (; new_h; new_h = new_h->next)
		if (strcmp(new_h->key, key) == 0)
			return (new_h->value);
	return (NULL);
}

#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Hash Table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_h;
	unsigned int i, node_exists = 0;

	if (ht == NULL || ht->size == 0)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		new_h = ht->array[i];
		for (; new_h; new_h = new_h->next)
		{
			printf(node_exists ? ", " : "");
			printf("'%s': '%s'", new_h->key, new_h->value);
			node_exists = 1;
		}
	}
	printf("}\n");
}
#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: Hash Table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next_new_h;
	unsigned int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		for (; ht->array[i]; ht->array[i] = next_new_h)
		{
			next_new_h = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
		if (ht->array[i] == NULL)
			free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
