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
	int l1 = 0;
	int j = 0;
	int l2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l1] != 0)
	{
		l1++;
	}
	while (s2[l2] != 0)
	{
		l2++;
	}
	a = malloc((l1 + l2 + 1) * sizeof(char));
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
		for (j = 0; j < l2; j++)
		{
			a[i + j] = s2[j];
		}
		a[add] = '\0';
	}
	return (a);
}
