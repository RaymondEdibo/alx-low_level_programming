#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check code
 *
 * @head: pointer
 * @index: index
 * Return: a
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *a = head;

	if (head == NULL)
	{
		return (0);
	}

	while (b < index)
	{
		if (head == NULL)
			return (NULL);
		a = head->next;
		head = a;
		++b;
	}
	return (a);
}
