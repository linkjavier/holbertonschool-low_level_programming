#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: Address to double linked list.
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
