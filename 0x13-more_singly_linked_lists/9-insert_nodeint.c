#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check code
 *
 * @head: pointer
 * @idx: index
 * @n: no.
 * Return: node index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *a = *head;
	listint_t *b;
	listint_t *c = *head;

	if (head == NULL)
		return (NULL);
	while (i < idx)
	{
		a = (*head)->next;
		*head = a;
		++i;
	}
	b = malloc(sizeof(listint_t));

	if (b == NULL)
		return (NULL);
	b->n = n;
	if (idx == 0)
	{
		b->next = *head;
		*head = b;
	}
	else
	{
		b->next = (*head)->next;
		(*head)->next = b;
		*head = c;
	}
	return (b);
}
