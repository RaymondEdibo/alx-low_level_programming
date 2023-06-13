#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - main
 * @ac: ac
 * @av: av
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, b = 0, l = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	a = malloc(sizeof(char) * l + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[b] = av[i][j];
			b++;
		}
		if (a[b] == '\0')
		{
			a[b++] = '\n';
		}
	}
	return (a);
}
