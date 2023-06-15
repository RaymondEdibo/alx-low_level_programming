#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *string_nconcat - check the code
 *@s1: char
 *@s2: char
 *@n: int
 *
 *Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i;
	char *j, *k;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (a = 0, j = s1; *j; j++)
		a++;
	for (b = 0, j = s2; *j; j++)
		b++;
	if (n > b)
		n = b;

	k = malloc((a + n + 1) * sizeof(char));
	if (!k)
		return (0);

	j = k;
	while (*s1)
		*j++ = *s1++;
	i = 0;
	while (i < n)
	{
		*j++ = s2[i++];
	}
	*j = 0;

	return (k);
}
