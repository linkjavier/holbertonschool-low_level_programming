#include "lists.h"
/**
 * free_dlistint - Function that frees a dlistint_t list.
 * @head: Address to doubly linked list.
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
