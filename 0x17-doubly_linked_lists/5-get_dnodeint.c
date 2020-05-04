#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Address to a Doubly Singled list
 * @index:  Index of the node, starting at 0
 * Return: the indexed nht node of *head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth = 0;

	while (nth < index && head != NULL)
	{
		head = head->next;
		nth++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
