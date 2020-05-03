#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: Address to structure.
 * Return: the number of nodes i
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
