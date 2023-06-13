#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - check the code
 *@height: h
 *@width: w
 *
 *Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(a[j]);
			}
		free(a);
		return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
