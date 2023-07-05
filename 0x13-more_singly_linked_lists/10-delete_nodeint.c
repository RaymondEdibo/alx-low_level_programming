#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check code
 *
 * @head: pointer
 * @index: index
 * Return: node index.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *a = *head;
	listint_t *b;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
		return (1);
	}

	while (i < index - 1)
	{
		a = a->next;
		++i;
		if (!a)
			return (-1);
	}
	b = a->next->next;
	free(a->next);
	a->next = b;
	return (1);
}
