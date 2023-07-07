#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint - check the code
 *@b: char
 *
 *Return: no. or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			number = number << 1;
		}
		else if (b[i] == '1')
		{
			number = (number << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (number);
}
