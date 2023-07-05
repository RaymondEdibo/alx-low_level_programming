#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check code
 * @head: list
 * @n: no.
 * Return: nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	b = *head;
	while (b->next)
	{
		b = b->next;
	}
	b->next = a;
	return (a);
}
