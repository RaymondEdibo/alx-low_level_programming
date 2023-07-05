#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - check code
 *
 * @head: pointer
 *
 * Return: a
 */
int sum_listint(listint_t *head)
{
	unsigned int l = 0;
	listint_t *a = head;

	if (head == NULL)
		return (0);

	while (head)
	{
		l += head->n;
		a = head->next;
		head = a;
	}
	return (l);
}
