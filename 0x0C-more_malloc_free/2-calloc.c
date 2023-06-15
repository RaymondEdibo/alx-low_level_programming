#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_calloc - check the code
 *@nmemb: int
 *@size: int
 *
 *Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = nmemb * size;

	a = malloc(i);
	if (a == NULL)
		return (NULL);

	memset(a, 0, i);

	return (a);
}
