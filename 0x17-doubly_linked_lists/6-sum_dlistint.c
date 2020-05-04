#include "lists.h"

/**
 * sum_dlistint - Sum of all the data (n) of a listint_t linked list.
 * @head: Address to doubly sinled list
 * Return: returns the sum of all the data (n) of a listint_t linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		count = count + head->n;
		head = head->next;
	}
	return (count);
}
