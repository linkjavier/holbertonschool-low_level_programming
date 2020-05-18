#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index in dlistint_t list
 * @head: Address to a list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if success, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *myfork = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = myfork->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(myfork);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (myfork == NULL)
			return (-1);
		myfork = myfork->next;
	}
	myfork->prev->next = myfork->next;
	if (myfork->next != NULL)
		myfork->next->prev = myfork->prev;
	free(myfork);
	return (1);
}
