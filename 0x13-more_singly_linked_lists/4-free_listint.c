#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - check code
 *
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
