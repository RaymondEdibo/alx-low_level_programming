#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * len - length
 * @a : char
 * Return: l
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
 * add_node - add
 * @head: head
 * @str: string
 * Return: node no.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *j;

	j = malloc(sizeof(list_t));
	if (j == NULL)
		return (NULL);
	j->str = strdup(str);

	j->len = len(str);
	j->next = *head;
	*head = j;

	return (j);
}
