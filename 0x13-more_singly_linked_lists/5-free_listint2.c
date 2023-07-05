#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - check code
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
}
