#include "main.h"
#include <stdlib.h>

/**
 *_strdup - check the code
 *@str: string
 *
 *
 *Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int i;
	int l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[l] != 0)
	{
		l++;
	}
	a = malloc((l + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= l ; i++)
		{
			a[i] = str[i];
		}
	}
	return (a);
}
