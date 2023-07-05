#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check code
 * @h: list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	int l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}
