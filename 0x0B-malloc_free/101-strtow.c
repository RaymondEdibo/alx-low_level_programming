#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * counter - main checker
 * @str: input
 *
 * Return: words no.
 */
int counter(char *str)
{
	int i, count = 0, l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	return (count);
}

/**
 * strtow - main
 * @str: input
 *
 * Return: pointer or NULL
 */
char **strtow(char *str)
{
	char **a;
	int i, j, l, wc, wl, t = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = counter(str);
	if (wc == 0)
		return (NULL);

	a = malloc((wc + 1) * sizeof(char *));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		while (str[t] == ' ')
			t++;

		l = strlen(str + t);
		wl = 0;

		for (j = 0; j < l; j++)
		{
			if (str[t + j] == ' ')
				break;
			wl++;
		}

		a[i] = malloc((wl + 1) * sizeof(char));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}

		strncpy(a[i], str + t, wl);
		a[i][wl] = '\0';

		t += wl;
	}

	a[wc] = NULL;

	return (a);
}
