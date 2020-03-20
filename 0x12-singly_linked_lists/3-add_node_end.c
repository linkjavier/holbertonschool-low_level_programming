#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 *_strlen - Function that returns the lenght
 *@s: Address to String.
 *Return: The lenght c.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 *add_node_end - Function that adds a new node at the end of a list_t list.
 *@head: Address to structure
 *@str: Address to String
 *Return: new.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;
	char *str2;
	list_t *ref;

	ref = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	str2 = strdup(str);
	if (str2 == NULL)
	{
		free(new);
		return (NULL);
	}
	len = _strlen(str2);
	new->str = str2;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ref->next != NULL)
	{
		ref = ref->next;
	}
	ref->next = new;
	return (new);
}
