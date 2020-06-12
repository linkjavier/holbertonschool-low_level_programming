#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Hash table
 * Return: Void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned int i;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			continue;
		}
		head = ht->array[i];
		while (head != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			flag = 1;
			head = head->next;
		}
	}
	printf("}\n");
}
