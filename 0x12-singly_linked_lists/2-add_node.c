#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 *_strlen - Function that returns the lenght
 *@s: Address to String-
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
 * add_node - Function that adds a new node at the beginning of a list_t list.
 * @head: Address to address to Structure.
 * @str: Address to String
 * Return: Elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int size = 0;
	char *str2;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	str2 = strdup(str);
	if (str2 == NULL)
	{
		free(new);
		return (NULL);
	}
	size = _strlen(str2);
	new->str = str2;
	new->size = size;
	new->next = *head;
	*head = new;
	return (*head);
}
