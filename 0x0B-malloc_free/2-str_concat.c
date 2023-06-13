#include "main.h"
#include <stdlib.h>

/**
 *_strdup - check the code
 *@s1: string 1
 *@s2: string 2
 *
 *Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i;
	int add;
	int l1 = 0;
	int j = 0;
	int l2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[l1] != 0)
	{
		l1++;
	}
	while (s2[l2] != 0)
	{
		l2++;
	}
	add = l1 + l2;
	a = malloc((add + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l1 ; i++)
		{
			a[i] = s1[i];
		}
		for (i = l1; i <= add ; i++)
		{
			a[i] = s2[j];
			j++;
		}
		a[add] = '\0';
	}
	return (a);
}
