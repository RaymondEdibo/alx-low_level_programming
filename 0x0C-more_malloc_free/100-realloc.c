#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_realloc - check the code
 *@s: void
 *@old_size: int
 *@new_size: int
 *
 *Return: 0
 */
void *_realloc(void *s, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *b = s;
	unsigned int i;

	if (new_size == 0 && b != NULL)
	{
		free(b);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (b);
	}
	if (b == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	a = malloc(new_size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		*(a + i) = *(b + i);
	}
	free(b);
	return (a);
}
