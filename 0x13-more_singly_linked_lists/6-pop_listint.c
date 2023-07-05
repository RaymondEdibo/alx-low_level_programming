#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - check code
 *
 * @head: pointer
 *
 * Return: a
 */
int pop_listint(listint_t **head)
{
	int a = 0;
	listint_t *b = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	b = (*head)->next;
	a = (*head)->n;
	free(*head);
	*head = b;

	return (a);
}
