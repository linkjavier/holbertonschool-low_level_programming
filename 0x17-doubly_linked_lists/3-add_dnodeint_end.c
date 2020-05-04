#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of a dl.
 * @head: Adrress to array of pointers to double link list
 * @n: Value of n of node.
 * Return: Address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	last = *head;
	if (last != NULL)
	{
		for (; last->next != NULL; last = last->next)
		;
		new->prev = last;
		last->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	new->n = n;
	new->next = NULL;
	return (*head);
}
