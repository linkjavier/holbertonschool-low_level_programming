#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of elements.
 * @h: Address to structure.
 * Return: a number of elements.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
