#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *array_range - check the code
 *@max: int
 *@min: int
 *
 *Return: 0
 */
int *array_range(int min, int max)
{
	int *a;
	int i, j;

	if (min > max)
		return (NULL);

	for (j = 0; j < (max - min); j++)
		;

	a = malloc(sizeof(int) * (j + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		a[i] = min++;
	}

	return (a);
}
