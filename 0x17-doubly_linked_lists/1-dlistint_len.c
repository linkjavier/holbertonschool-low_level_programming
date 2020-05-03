#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
int i;

	for (i = 0; h != NULL; i++)
	h = h->next;
	return (i);
}
