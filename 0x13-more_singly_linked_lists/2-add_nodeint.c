#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - check code
 * @head: list
 * @n: no.
 * Return: nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->next = *head;
	*head = a;

	return (a);
}
