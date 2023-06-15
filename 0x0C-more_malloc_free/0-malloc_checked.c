#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - check the code
 *@b: int
 *
 *Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
