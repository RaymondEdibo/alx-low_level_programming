#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * len - length
 * @a : char
 * Return: value is i
 */
int len(const char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - add
 * @head: head
 * @str: string
 * Return: node no.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *j;
	list_t *k;

	j = malloc(sizeof(list_t));
	if (j == NULL)
		return (NULL);

	j->str = strdup(str);
	j->len = len(str);
	j->next = NULL;

	if (*head == NULL)
	{
		*head = j;
		return (j);
	}

	k = *head;
	while (k->next)
	{
		k = k->next;
	}
	k->next = j;
	return (j);
}
